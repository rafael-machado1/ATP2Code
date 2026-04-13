#include <stdio.h>

int main()
{

  char name[] = "Rafael";
  char *ptr = name;

  for(int i = 0; i < 7; i++)
  {
    scanf(" %c", ptr + i);
  }

  printf("%s\n",name);

  return 0;

}