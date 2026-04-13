#include <stdio.h>

// Dobrando por referência
int duplicate(int *num)
{
  return *num = *num * 2;
}

// Triplicando por referência
int triplicate(int *num)
{
  return *num = *num * 3;
}

// Quadruplicando por referência
int quadruplicate(int *num)
{
  return *num = *num * 4;
}

int main()
{
  int n1;

  // Exemplo de entrada: 10
  scanf("%d",&n1);
  
  // Primeira chamada dobra o valor original
  // Saida 1 = 20 -> (10 * 2)
  duplicate(&n1);
  printf("%d\n",n1);

  // Segunda chamada triplica o valor anteriormente dobrado
  // Saida 2 = 60 -> (20 * 3)
  triplicate(&n1);
  printf("%d\n",n1);

  // Terceira chamada quaruplica o valor triplicado
  // Saida 3 = 240 -> (60 * 4)
  quadruplicate(&n1);
  printf("%d\n",n1);

  return 0;
}