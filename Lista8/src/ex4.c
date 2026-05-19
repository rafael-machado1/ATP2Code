#include <stdio.h>
#include <string.h>

int main()
{

    // Registro
    // Struct ou Structure
    /*
        A struct funciona como uma classe em POO, mas não utiliza de funções.
        Ela reserva espaço para as variáveis declaradas (fields)
        Serve como um facilitador e umas ótima maneira de código limpo
    */ 

    // Segue o exemplo:
    typedef struct pessoa 
    {
        float peso;
        float altura;
        int idade;
    } serHumano;

    // Matriz
    // Array Multidimensional
    /*
        A matriz funciona com um vetor, mas possui um índice a mais.
        Sendo assim, armazena mais informações que um simples vetor.
        A partir da matriz, inúmeros ramos da programação surgiram. 
    */ 

    // Segue o exemplo:
    inteiros[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }

    // Uma ótima maneira de diferenciar ambos
    // A struct pode guardar matrizes em um tipo

    return 0;

}