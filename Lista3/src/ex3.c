#include <stdio.h>

int soma(int num1, int num2);

int main() {
  int n1,n2;
  scanf("%d %d",&n1,&n2);

  printf("%d\n",soma(n1,n2));

  return 0;

}

int soma(int num1, int num2){
  return num1 + num2;
}