#include <stdio.h>

float media (float n1, float n2)
{
    return (n1 + n2) / 2;
}  

int main()
{

    // nome, matrícula, nota1, nota2 e média

    typedef struct aluno
    {
        int matricula;
        float nota1;
        float nota2;
    } aluno;

    aluno turma[5] =
    {
        {1, 5.6, 7.8},
        {2, 6.2, 7.5},
        {3, 8.5, 9.0},
        {4, 2.4, 8.3},
        {5, 2.8, 9.2}
    }; 

    for (int i = 0; i < 5; i++)
    {
        printf("%.1f\n", media(turma[i].nota1, turma[i].nota2));
    }

}