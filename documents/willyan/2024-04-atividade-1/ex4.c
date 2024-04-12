#include <stdio.h>

int main() 
{
  int n = 0;
  float t = 0;

  puts("Insira o número de dias: ");
  scanf("%d", &n);

  t = 30 * n;
  t = t - (t * 8) / 100;

  printf("O resultado é: %f\n", t);
  return 0;
}
