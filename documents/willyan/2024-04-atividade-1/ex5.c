#include <stdio.h>

int main() 
{
  int a, b, m;
  puts("Insira A: ");
  scanf("%d", &a);
  puts("Insira B: ");
  scanf("%d", &b);

  m = a;
  a = b;
  b = m;

  printf("A: %d, B: %d\n", a, b);
}
