#include <stdio.h>

int sumInf(int n1)
{
  if (n1 == 1 || n1 == 0)
  {
    return 1;
  }
  else
  {
    return n1 + sumInf(n1 - 1);
  }

}

int main() 
{

  int num;
  scanf("%d",&num);

  printf("%d\n",sumInf(num));

  return 0;
}