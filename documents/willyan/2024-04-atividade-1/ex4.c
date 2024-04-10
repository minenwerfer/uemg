#include <stdio.h>

int main() 
{
  int n;
  float t;

  puts("Insira o número de dias: ");
  scanf("%d", &n);

  t = 30 * n;
  t = t - (t * 7) / 100;

  printf("O resultado é: %f\n", t);
  return 0;
}
