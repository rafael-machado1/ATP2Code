#include <stdio.h>

int isOdd(int num);

int main()
{
  int n1;
  scanf("%d",&n1);

  printf("Se par: 1\nSe impar: 0\nO número é: %d",isOdd(n1));

  return 0;
}

int isOdd(int num)
{
  if (num % 2 == 0)
  {
    return 1; 
  }
  else
  {
    return 0;
  }

}
