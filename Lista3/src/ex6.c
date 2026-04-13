#include <stdio.h>

void aprovacao(double nota);

int main()
{

  double n1;
  scanf("%lf",&n1);

  aprovacao(n1);

  return 0;

}

void aprovacao(double nota)
{
  if(nota >= 6)
  {
    printf("Aluno aprovado.\n");
  }
  else
  {
    printf("Aluno reprovado.\n");
  }

}