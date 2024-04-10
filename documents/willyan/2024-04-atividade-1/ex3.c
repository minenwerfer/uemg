#include <stdio.h>

int main() 
{
  float s, receber;
  puts("Insira o salário do funcionário: ");
  scanf("%f", &s);

  receber = s + ((s * 5) / 100) - ((s * 7) / 100)

  printf("O resultado é: %f\n", s);
  return 0;
}
