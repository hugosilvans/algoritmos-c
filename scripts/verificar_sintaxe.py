"""Valida sintaxe dos exercícios, sem misturar programas com funções main distintas."""
from pathlib import Path
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
falhas = []
total = 0
for arquivo in sorted(ROOT.rglob('*')):
    if arquivo.suffix not in {'.c', '.cpp'} or any(
        parte in {'.git', 'node_modules', 'target', 'dist'} for parte in arquivo.parts
    ):
        continue
    compilador = 'g++' if arquivo.suffix == '.cpp' else 'gcc'
    if not shutil.which(compilador):
        raise SystemExit(f'Instale {compilador} para executar esta verificação.')
    padrao = '-std=c++17' if arquivo.suffix == '.cpp' else '-std=gnu11'
    resultado = subprocess.run(
        [compilador, padrao, '-fsyntax-only', str(arquivo), '-I', str(arquivo.parent), '-I', str(ROOT)],
        capture_output=True, text=True,
    )
    total += 1
    if resultado.returncode:
        falhas.append(str(arquivo.relative_to(ROOT)))
        print(resultado.stderr, file=sys.stderr)
print(f'{total - len(falhas)}/{total} arquivos passaram na verificação de sintaxe.')
if falhas:
    raise SystemExit(1)
