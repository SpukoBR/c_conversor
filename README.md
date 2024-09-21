# Conversor de Temperatura em C

Este projeto implementa um conversor de temperatura na linguagem C, que converte valores entre Celsius, Fahrenheit e Kelvin. O programa recebe três argumentos: a temperatura, a unidade de origem e a unidade de destino, e retorna o valor convertido.

## Funcionalidades

- Conversão de Celsius para Fahrenheit: `C -> F`
- Conversão de Fahrenheit para Celsius: `F -> C`
- Conversão de Celsius para Kelvin: `C -> K`
- Conversão de Kelvin para Celsius: `K -> C`

## Estrutura dos Arquivos

- `Makefile`: Arquivo responsável por compilar o projeto e gerar o executável `converter`.
- `main.c`: Ponto de entrada da aplicação, onde os argumentos são validados e a conversão é processada.
- `conversor.c`: Contém as funções de conversão entre diferentes unidades de temperatura.
- `ft_atoi.c`: Converte uma string em um número inteiro.
- `ft_isspace.c`: Verifica se um caractere é um espaço em branco.
- `ft_putchar_fd.c`: Imprime um caractere no arquivo especificado.
- `ft_putnbr_fd.c`: Imprime um número no arquivo especificado.
- `ft_putstr_fd.c`: Imprime uma string no arquivo especificado.
- `ft_strlen.c`: Calcula o comprimento de uma string.
- `converter.h`: Cabeçalho do projeto contendo as declarações de funções e estruturas de dados necessárias.

## Como Usar

1. Clone o repositório:
   ```bash
   git clone https://github.com/SpukoBR/c_conversor.git
   ```
2. Compile o projeto:
   ```bash
   make
   ```
3. Execute o conversor:
   ```bash
   ./converter <temperatura> <unidade_origem> <unidade_destino>
   ```
   Exemplo:
   ```bash
   ./converter 100 C F
   ```
   Resultado:
   ```
   212.000000
   ```

## Erros Tratados

- Conversões inválidas: Exibe uma mensagem de erro se a unidade de origem ou destino for inválida.
- Argumentos insuficientes ou incorretos: Exibe uma mensagem de uso correto se o número de argumentos não for 3.

## Limpeza

Para limpar os arquivos objetos e o executável, execute:

```bash
make fclean
```
