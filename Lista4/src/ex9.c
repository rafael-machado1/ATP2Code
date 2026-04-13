#include <stdio.h>

int times = 1;

int call()
{
  return times++;
}

int main()
{
  while(1)
  {
    printf("Vezes que a função foi chamada: %d\n",call());
    if(times > 100)
    {
      break;
    }
  }
  return 0;
}