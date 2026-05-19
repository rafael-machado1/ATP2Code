#include <stdio.h>
#include <string.h>

int main()
{
    // Struct ou Structure
    /*
        A struct funciona como uma classe em POO, mas não utiliza de funções.
        Ela reserva espaço para as variáveis declaradas (fields)
        Serve como um facilitador e umas ótima maneira de código limpo
    */ 

    // Segue o exemplo:
    struct aluno 
    {
        int cod;
        char nome[50]; 
    };

    // Podemos também definir a struct como um tipo, isso facilita na criação de uma persona, por exemplo.
    typedef struct professor{
        int cod;
        char nome[50];

    } prof;

    // É possível, também, criar um vetor assimilando ao tipo criado no struct
    prof pessoas[10];

    // Dessa maneira, é possível declarar os atributos de pessoas[4]
    strcpy(pessoas[4].nome, "Rafael");
    pessoas[4].cod = 4;

    for (int i = 0; i < 10; i++)
    {
        printf("%s\n",pessoas[i].nome);
        printf("%d\n",pessoas[i].cod);

        // Como resultado, ao encontrar o 4º elemento, será printado o valor atribuído anteriormente
        // Claro, para os valores não declarados, a própria linguagem C vai assumir os valores faltantes como lixo de memória
    }

    // Existem outras inúmeras possibilidads com as structs, trabalharei com elas nesse repositório

    return 0;

}