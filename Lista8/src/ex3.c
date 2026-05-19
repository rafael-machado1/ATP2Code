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

    // Vetor
    // Array Unidimensional
    /*
        O vetor funciona como um array em outras linguagens.
        Ele guarda determinados valores em uma espécie de lista.
        O vetor possui sempre um tamanho fixo
    */ 

    // Segue o exemplo:
    inteiros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}


    // Uma ótima maneira de diferenciar ambos >
    // A struct pode guardar vetores em um tipo
    // Por exemplo:
    serHumano pessoas[4] = {
        {73.0, 1.83, 18},
        {153.6, 2.12, 43},
        {46.2, 1.51, 23},
        {60.0, 1.65, 19}
    }

    return 0;

}