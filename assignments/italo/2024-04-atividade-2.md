---
author: João G. Santos
email: joaosan177@gmail.com
RA: 2411612877
---

# Atividade 2

- Aluno: João Gabriel Santos / RA: 2411612877
- Curso: Engenharia da Computação 1º Período (noturno)

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
