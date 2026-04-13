#include <stdio.h>

int pot(int base, int expoente)
{
  if (base == 1)
  {
    return 1;
  }
  else if (base == 0)
  {
    return 0;
  }

  if (expoente == 0)
  {
    return 1;
  }
  else
  {
    return base * pot(base, expoente - 1);
  }

}

int main() 
{

  int num1,num2;
  scanf("%d %d",&num1,&num2);

  printf("%d\n",pot(num1, num2));

  return 0;
}