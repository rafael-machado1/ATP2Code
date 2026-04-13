#include <stdio.h>

int main()
{

  // Nota para depois:
  // char[] (string) é um conjunto de chars e já é um ponteiro
  char str[] = "bala";

  // str[1]
  char *ptr = str;

  // str[1] = m
  *ptr = 'm';
  printf("%c\n",*ptr);

  // Expected output: mala
  printf("%s\n",str);

  return 0;

}