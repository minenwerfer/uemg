#include <stdio.h>
#include <math.h>

int main() 
{
  float
    h = 0,
    a = 0,
    b = 0;

  puts("Insira o cateto A: ");
  scanf("%f", &a);
  puts("Insira o cateto B: ");
  scanf("%f", &b);

  h = sqrt(pow(a, 2) + pow(b, 2));

  printf("O resultado é: %f\n", h);
  return 0;
}
