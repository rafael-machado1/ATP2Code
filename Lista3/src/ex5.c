#include <stdio.h>

int media(int num1, int num2, int num3);

int main() {
  int n1,n2,n3;
  scanf("%d %d %d",&n1,&n2,&n3);

  printf("%d\n",media(n1,n2,n3));

  return 0;

}

int media(int num1, int num2, int num3){
  return (num1 + num2 + num3) / 3;
}