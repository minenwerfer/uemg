#include <stdio.h>

int main() 
{
  float
    f = 0,
    c = 0;

  puts("Insira a temperatura em Fahrenheit: ");
  scanf("%f", &f);

  c = 5 * (f - 32)/9;

  printf("O resultado é: %f\n", c);
  return 0;
}
