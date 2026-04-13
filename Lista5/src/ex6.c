#include <stdio.h>

void dobrar(int *num)
{
  *num = *num * 2;
}

int main()
{
  int n;
  scanf("%d",&n);

  dobrar(&n);
  printf("%d\n",n);


}