#include <stdio.h>

int main() 
{
  int
    a = 0,
    b = 0,
    m = 0;

  puts("Insira A: ");
  scanf("%d", &a);
  puts("Insira B: ");
  scanf("%d", &b);

  m = a;
  a = b;
  b = m;

  printf("A: %d, B: %d\n", a, b);
  return 0;
}
