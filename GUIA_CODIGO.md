# Guia de leitura do código

Este guia descreve a organização para estudar e explicar o repositório. Os comentários do código destacam regras, contratos, validações e responsabilidade pela memória ou pelos dados.

## Por onde começar

| Caminho | Responsabilidade |
| --- | --- |
| [entrada_inteiro.h](entrada_inteiro.h) | Validação compartilhada dos argumentos inteiros. |
| [funcao/primo.c](funcao/primo.c) | Compara argumentos e verifica primalidade. |
| [funcao/maior.c](funcao/maior.c) | Percorre os argumentos para encontrar o maior valor. |
| [ponteiros/alocacao_complexa.c](ponteiros/alocacao_complexa.c) | Lê pares do CSV e calcula regressão linear com memória dinâmica. |

## Como estudar uma alteração

1. Identifique a entrada: argumento, formulário ou requisição HTTP.
2. Localize a validação e a função que transforma os dados.
3. Observe a saída e o comportamento quando algo falha.
4. Execute um exemplo pequeno antes de mudar a regra.
5. Consulte o diff do Git para distinguir formatação de mudanças de comportamento.

## Convenções

- `.editorconfig` define codificação, indentação e final de linha.
- Comentários explicam motivos e restrições; não repetem cada comando.
- Arquivos gerados, dependências e credenciais locais ficam fora do versionamento.
- Um `main` pertence ao seu exercício; projetos de aula independentes não formam um único executável.
- Créditos, autoria anterior e licenças são preservados.
- `.clang-format` registra a formatação aplicada ao código C/C++ e Java.

## Inventário de fontes próprias e didáticas

36 arquivo(s) `.c`, 3 arquivo(s) `.h`.

## Limite desta organização

A formatação e os comentários não comprovam que todos os exercícios estejam completos. Os testes adicionados cobrem os fluxos descritos no README; validar sintaxe não equivale a testar todos os resultados. Veja também as instruções e limitações específicas do projeto.
