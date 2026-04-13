#include <stdio.h>

int triple(int num)
{
  return num * 3;
}

int main()
{
  int n1;
  scanf("%d",&n1);

  printf("%d\n",triple(n1));

  return 0;
}