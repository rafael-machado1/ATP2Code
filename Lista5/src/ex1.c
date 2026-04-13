#include <stdio.h>

int factorial(int n1)
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

int main() 
{

  int num;
  scanf("%d",&num);

  printf("%d\n",factorial(num));

  return 0;
}
