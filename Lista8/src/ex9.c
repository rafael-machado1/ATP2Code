#include <stdio.h>

int main()
{

    // nome, matrícula, nota1, nota2 e média

    typedef struct aluno
    {
        int matricula;
        float nota1;
        float nota2;
    } aluno;

    aluno turma[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%f %f", &turma[i].nota1, &turma[i].nota2);
        turma[i].matricula = i;
        printf("Matrícula: %d\n Nota 1: %.1f\n Nota 2: %.1f\n", turma[i].matricula, turma[i].nota1, turma[i].nota2);
    }

    

    return 0;

}