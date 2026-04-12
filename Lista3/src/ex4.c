#include <stdio.h>

void cumprimento(char nome[]);

int main() {
  char usuario[50];
  scanf("%49s",&usuario);

  cumprimento(usuario);

  return 0;

}

void cumprimento(char nome[]){
  printf("Olá, %s!\n", nome);
}