#include <stdio.h>

int main()
{
  int vetor[] = {1,2,3,4,5};

  int *ptr = vetor;

  // O ponteiro acessa o vetor
  // Para mudar o indice, apenas some ao ponteiro
  // Ex: *(ptr + 1) = 2
  // *ptr equivale ao primeiro indice
  printf("%d\n",*(ptr));

  return 0;

}