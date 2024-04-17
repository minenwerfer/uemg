---
title: Lista aula 2
---

### 1

```c
#include <stdio.h>

int main()
{
  int
    i = 2,
    j = 0,
    limite = 2000000,
    soma = 0;

  for( ; i<limite; i++ )
  {
    int primo = 1;
    for( j=2; j<i; j++  )
    {
      if( !(i % j) )
      {
        primo = 0;
        break;
      }
    }

    if( primo )
    {
      soma += i;
    }
  }

  printf("Soma: %d\n", soma);

  return 0;
}
```

### 2

```c
#include <stdio.h>

int main()
{
  int
    i = 0,
    n = 0,
    c = 0,
    soma = 0,
    max = 0,
    min = 0,
    par = 0,
    numpares = 0;

  puts("Insira N: ");
  scanf("%d", &n);

  for( ;i<n; i++ )
  {
    printf("\nInsira n#%d: ", i + 1);
    scanf("%d", &c);

    soma += c;

    if( !(c % 2) )
    {
        par += c;
        numpares++;
    }

    if( !i || c > max )   max = c;
    if( !i || c < max )   min = c;
  }

  printf("Soma: %d\n", soma);
  printf("Quantidade: %d\n", n);
  printf("Média: %f\n", (float)(soma / n));
  printf("Menor: %d\n", min);
  printf("Maior: %d\n", max);
  printf("Média pares: %f\n", (float)(par / numpares));

  return 0;
}
```

### 3

```c
#include <stdio.h>

int main()
{
  int
    n = 0,
    i = 0,
    j = 0;

  scanf("%d", &n);

  while( i++ < n )
  {
    int primo = 1;
    j = 1;

    while( j++ < i )
    {
      if( !(i % j) )
      {
        primo = 0;
        break;
      }
    }

    if( primo )
    {
      printf("%d\n", primo);
    }
  }

  return 0;
}
```

### 4

```c
#include <stdio.h>

int main()
{
  int n = 0,
  scanf("%d", &n);

  while( n-- > 0 )
  {
    printf("%d\n", n);
  }

  return 0;
}
```

### 5

```c
#include <stdio.h>

int main()
{
  int
    n = 0,
    i = 0,
    c = 0,
    max = 0,
    acc = 0;

  scanf("%d", &n);

  while( i++ < n )
  {
    scanf("%d", &c);

    if( !i || c > max )
    {
      max = c;
      acc++;
    }
  }

  printf("Max: %d\n", max);
  printf("Acc: %d\n", acc);

  return 0;
}
```

### 6

```c
#include <stdio.h>

int main()
{
  int
    n = 0,
    i = 0;

  scanf("%d", &n);

  while( i++ < n )
  {
    if( !(n % i) )
    {
      printf("%d\n", i);
    }
  }

  return 0;
}
```

### 6

```c
#include <stdio.h>

int main()
{
  int
    i = 0,
    max = 0;

  while( i++ < 1000 )
  {
    if( !(i % 5) || !(i % 3) )
    {
      max += i;
    }
  }

  printf("Soma: %d\n", max);

  return 0;
}
```

### 7

```c
#include <stdio.h>

int main()
{
  int
    i = 0,
    max = 0;

  while( i++ < 1000 )
  {
    if( !(i % 5) || !(i % 3) )
    {
      max += i;
    }
  }

  printf("Soma: %d\n", max);

  return 0;
}
```

### 8

```c
#include <stdio.h>

int main()
{
  int
    soma = 0,
    idade = 0,
    qtd = 0;

  do {
    scanf("%d", idade);
    soma += idade;
    qtd++;

  } while (idade != 0);

  printf("Média de idades: %d\n", idade / qtd);

  return 0;
}
```

### 9

```c
#include <stdio.h>
#include <random.h>

int main()
{
  int
      num = rand(),
      guess = 0,
      i = 0;

  do {
    scanf("%d", guess);
    printf("Você digitou um número %s!\n", guess > num
        ? "maior"
        : "menor");

  } while (guess != num);

  printf("Acertou, mizeravi\n");

  return 0;
}
```

### 10

```c
#include <stdio.h>

#define PRINT_OP(exp) \
  printf(#exp " = %.2f\n", #exp, exp)

enum {
    ADD = 1,
    SUB = 2,
    MUL = 3,
    DIV = 4,
    EXIT = 5,
    OPTS_SIZE,
};

char *opts[] = {
  "Somar",
  "Subtrair",
  "Multiplicar",
  "Dividir",
  "Sair",
};

int main()
{
  int opt = 0;
  float
    x = 0,
    y = 0;

  printf("X: "); scanf("%f", &x);
  printf("Y: "); scanf("%f", &y);

  do {
    int i = 0;
    for( ; i<OPTS_SIZE - 1; i++ )
    {
      printf("#%d - %s\n", i + 1, opts[i]);
    }

    scanf("%d", &opt);
    getchar();

    switch( opt )
    {
      case ADD: PRINT_OP(x + y); break;
      case SUB: PRINT_OP(x - y); break;
      case MUL: PRINT_OP(x * y); break;
      case DIV: PRINT_OP(x / y); break;
    }

  } while (opt != 5);

  printf("Acertou, mizeravi\n");

  return 0;
}
```

