#include <stdio.h>

int contagem(int n1)
{
  if (n1 == 0)
  {
    return 1;
  }
  else
  {
    return 1 + contagem(n1 - 1);
  }

}

int main() 
{

  int num;
  scanf("%d",&num);

  printf("%d\n",contagem(num));

  return 0;
}