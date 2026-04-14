#include <stdio.h>

// INT_MAX e INT_MIN
#include <limits.h>

int media(int n)
{
  return n / 10;
}

// int magnitude(int n)
// {
//   if (n > n - 1 && n > n + 1)
//   {
//     maior = numeros[i]
//   } 
//     else if (numeros[i] < numeros[i - 1] && numeros[i] < numeros[i + 1])
//   {
//     menor = numeros[i]
//   } 
// }

int main() 
{

  int maior = INT_MIN;
  int menor = INT_MAX;
  int num = 0;
  int numeros[10] = {0};

  for (int i = 0; i < 10; i++)
  {
    printf("Digite um número\n");
    scanf("%d",&numeros[i]);

    if (numeros[i] > maior)
    {
      maior = numeros[i]
    } 
    else if (menor < numeros[i])
    {
      menor = numeros[i]
    }

    num += numeros[i];

  }

  printf("[ ");

  for ( int j = 0; j < 10; j++)
  {
    printf("%d ",numeros[j]);
  }

  printf(" ]\n");
  media(num);
  printf("%d\n",maior);
  printf("%d\n",menor);

  return 0;
}