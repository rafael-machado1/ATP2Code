#include <stdio.h>

int main() 
{

  int num;
  int numeros[10] = {0};

  for (int i = 0; i < 10; i++)
  {

    printf("Digite um número\n");
    scanf("%d",&numeros[i]);

  }

  printf("[ ");

  for ( int j = 0; j < 10; j++)
  {
    
    printf("%d ",numeros[j]);

  }

  printf(" ]\n");

  return 0;
}