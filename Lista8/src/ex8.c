#include <stdio.h>

int main()
{
    int qtd = 0;

    typedef struct produto
    {
        int codigo;
        float preco;
        int quantidade;
    } produto;

    produto estoque[5] =
    {
        {1, 249.99, 5},
        {2, 24.99, 12},
        {3, 4.79, 24},
        {4, 1.99, 120},
        {5, 74.99, 10}
    }; 

    for (int i = 0; i < 5; i++)
    {
        qtd += estoque[i].quantidade;
    }
    
    printf("%d produtos no estoque!\n", qtd);
    
    return 0;
}