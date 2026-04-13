#include <stdio.h>

int soma(int n1, int n2)
{
  return n1 + n2;
}

void show(int var)
{
  printf("A soma dos números é %d\n",var);
}

int main()
{ 

  int valor1,valor2;
  scanf("%d %d",&valor1,&valor2);

  show(soma(valor1,valor2));

  return 0;

}