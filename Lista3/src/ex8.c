#include <stdio.h>

int square(int num)
{
  return num * num;
}

int main()
{
  int n1;
  scanf("%d",&n1);

  printf("%d ao quadrado é: %d\n",n1,square(n1));

}