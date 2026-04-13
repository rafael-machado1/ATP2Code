#include <stdio.h>

void inc(int *num)
{
  *num = *num + 1;
}

int main()
{
  int n1;
  scanf("%d",&n1);

  inc(&n1);
  printf("%d\n",n1);

  return 0;
}