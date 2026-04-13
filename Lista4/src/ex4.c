#include <stdio.h>

void change(int *num, int *num2)
{
  int num3 = num;
  *num = *num2;
  *num2 = *num3;
}

int main()
{
  int n1,n2;
  scanf("%d%d",&n1,&n2);

  change(&n1,&n2);
  printf("Valor 1: %d\n Valor 2: %d\n",n1,n2);

  return 0;
}