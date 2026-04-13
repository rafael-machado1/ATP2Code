#include <stdio.h>

int sum(int n1, int n2, int n3)
{
  return n1 + n2 + n3;
}

int avg(int n1, int n2, int n3)
{
  return (n1 + n2 + n3) / 3;
}

int largest(int n1, int n2, int n3)
{
  if (n1 >= n2 && n1 >= n3)
  {
    return n1;
  }
  else if (n2 >= n1 && n2 >= n3)
  {
    return n2;
  }  
  else
  {
    return n3;
  }      
}

int main()
{ 

  int valor1,valor2,valor3;
  scanf("%d %d %d",&valor1,&valor2,&valor3);

  printf(
    "A soma dos números é de: %d\n"
    "A média dos números é de %d\n"
    "O maior dos números é de: %d\n",
    sum(valor1,valor2,valor3), avg(valor1,valor2,valor3), largest(valor1,valor2,valor3)
  );

  return 0;

}