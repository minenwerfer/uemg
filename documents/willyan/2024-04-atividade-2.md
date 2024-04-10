1. 

```c
int main()
{
  int idade;
  scanf("%d", &idade);

  if( idade >= 5 && idade <= 7 )
  {
    puts("Infantil A\n");
  }
  else if( idade >= 8 && idade <= 10 )
  {
    puts("Infantil B\n");
  }
  else if( idade >= 11 && idade <= 13 )
  {
    puts("Juvenil A\n");
  }
  else if( idade >= 14 && idade <= 17 )
  {
    puts("Juvenil B\n");
  }
  else
  {
    puts("Sênior\n");
  }
}
``` 
