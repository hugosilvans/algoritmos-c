# Algoritmos e Lógica de Programação

Exercícios e códigos da disciplina de Algoritmos e Lógica de Programação — 1º semestre de 2025.

## Conteúdo

- [Tipos de dados](tipos_de_dados/)
- [Vetores](vetores/)
- [Funções](funcao/)
- [Ponteiros](ponteiros/)
- [Primeiros programas](ola_mundo/)
- Atividades práticas nas pastas `atividade1`, `atividade2` e `atividade4` a `atividade9`.

## Como estudar os exemplos

Os exercícios estão organizados em pastas e utilizam a linguagem C. Abra a pasta desejada e confira os arquivos antes de compilar: cada exercício pode ter seu próprio ponto de entrada.

## Contexto

Repositório de estudos acadêmicos, mantido como registro da minha aprendizagem.

## Licença

Consulte o arquivo [LICENSE](LICENSE).

## Exemplos de linha de comando

`funcao/primo.c` e `atividade6/verificar_numero_primo.c` aceitam `-primo inteiro` ou `-maior inteiro inteiro`. Os exemplos `maior.c` aceitam dois ou mais inteiros. Cada programa é compilado separadamente; não reúna arquivos com várias funções `main` no mesmo executável.

```bash
gcc -std=c11 funcao/primo.c -o primo
./primo -primo 7
gcc -std=c11 funcao/maior.c -o maior
./maior 4 9 2
```

## Guia do código

Consulte [GUIA_CODIGO.md](GUIA_CODIGO.md) para localizar os módulos, entender as convenções e estudar as alterações.

## Verificação dos exercícios C/C++

Com Python, GCC e G++ disponíveis, execute `python scripts/verificar_sintaxe.py`. A verificação trata cada fonte separadamente; ela não substitui a execução de exemplos nem a compilação dos projetos Java.
