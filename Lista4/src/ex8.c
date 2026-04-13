#include <stdio.h>

void changeTo(int *num)
{
  *num = *num * 2;
}

void passBy(int num)
{
  num = num * 2;
}

int main()
{
  int n1;
  scanf("%d",&n1);

  passBy(n1);
  printf("Utilizando o valor: %d\n",n1);

  changeTo(&n1);
  printf("Utilizando por referência: %d\n",n1);

  return 0;
}