## a. Programa

Arquivo que pode ser executado pelo sistema operacional que segue instruções
de forma sequencial e produz algum resultado.

## b. Expressão

Conjunto de termos e operadores que avalia para um valor em tempo de execução.
Exemplo da expressão Black Friday (metade do dobro): 
```
(x * 2) / 2
```

## c. Biblioteca

Componente que pode ser reusado por vários programas, evitando repetição de código.
Exemplos:

- stdlib.h: standard library do C
- allegro.h: biblioteca de multimídia para C

## d. Função

Unidade de um software que recebe um valor como parâmetro e retorna outro valor.
Uma função pode ou não gerar efeitos colaterais, como mutar o valor de algum
parâmetro ou mostrar algo na tela.
Exemplo de uma função que retorna o dobro de `x` em Haskell:

```haskell
f x = x * 2
```

## e. Procedimento

Trecho do código que contém instruções sequenciais, não separadas por
funções.

## f. Passagem de parâmetros por Valor e por Referência

Exemplo de passagem de parâmetro por valor:
```
int f(int a) {
  a = 2;
  return a;
}

int a = 1, b = 1;
f(a);
f(&b);

assert( a == 1 );
assert( b == 1 ); // erro
```

## g. Comandos Condicionais

Comandos que redirecionam o código para branches específicas a depender
de uma condição.
Exemplos:

- if
- else
- elif
- switch

## h. Comandos de Repetição

Exemplos:

- for
- while
- do


