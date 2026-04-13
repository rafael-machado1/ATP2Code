#include <stdio.h>

int recursiveFactorial(int n1)
{
  if(n1 == 0 || n1 == 1)
  {
    return 1;
  }
  else 
  {
    return n1 * factorial(n1 - 1);
  }
}

int loopFactorial(int n1)
{
  int contador = 1;

  for(int i = n1; i > 1; i--)
  {
    contador *= i;
  }
  return contador;
}

int main()
{
  int n;
  scanf("%d",&n);

  printf("%d\n",loopFactorial(n));
  printf("%d\n",recursiveFactorial(n));

  return 0;

}