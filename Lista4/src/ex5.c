#include <stdio.h>

int varGlobal = 10;

int main() 
{

  int varGlobal = 20;

  if (varGlobal == 20)
  { 
    printf("A variável mudou seu valor na função\n");
  } 
  else
  {
    printf("A variável não mudou seu valor na função\n");
  }
  
  printf("%d\n",varGlobal);

  return 0;
}