#include <stdio.h>
#include <math.h>

int main() 
{
  int h, a, b;
  puts("Insira o cateto A: ");
  scanf("%d", &a);
  puts("Insira o cateto B: ");
  scanf("%d", &b);

  h = sqrt(pow(a, 2) + pow(b, 2));

  printf("O resultado é: %d\n", h);
  return 0;
}
