#include <stdio.h>

void change(int *num)
{
  *num = *num + 10;
}

int main()
{
  int n1;
  scanf("%d",&n1);

  change(&n1);
  printf("%d\n",n1);

  return 0;
}