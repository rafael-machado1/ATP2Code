#include <stdio.h>

int dobro();

int main() {
  int n1;
  scanf("%d",&n1);

  printf("%d\n",dobro(n1));

  return 0;

}

int dobro(int num1){
  return num1 * 2;
}