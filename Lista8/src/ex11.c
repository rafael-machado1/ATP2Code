#include <stdio.h>

float media (float n1, float n2)
{
    return (n1 + n2) / 2;
}  

#define QTD 3

int main()
{

    // nome, matrícula, nota1, nota2 e média

    typedef struct aluno
    {
        int matricula;
        float nota1;
        float nota2;
    } aluno;

    aluno turma[QTD];

    for (int i = 0; i < QTD; i++)
    {
        scanf("%f %f", &turma[i].nota1, &turma[i].nota2);
        turma[i].matricula = i + 1;
        if (media(turma[i].nota1, turma[i].nota2) >= 6)
        {
            printf("Matrícula: %d\nNota 1: %.1f\nNota 2: %.1f\nMedia: %.1f\n ", turma[i].matricula, turma[i].nota1, turma[i].nota2, media(turma[i].nota1, turma[i].nota2));
        }
        else
        {
            continue;
        }
        
    }

    

    return 0;

}