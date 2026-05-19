#include <stdio.h>

void addMatrix(int tamanho, int a[tamanho][tamanho], int b[tamanho][tamanho], int sum[tamanho][tamanho])
{
	for (int i = 0; i < tamanho; i++)
	{
		for (int j = 0; j < tamanho; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];	
		}
	}
}

void multiMatrix(int tamanho, int a[tamanho][tamanho], int b[tamanho][tamanho], int multi[tamanho][tamanho])
{
    for(int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {

            multi[i][j] = 0;

            for (int k = 0; k < tamanho; k++)
            {
                multi[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{

    int matrix1[3][3] = {[1, 2, 3],[3, 4, 5],[6, 7, 8]};
    int matrix2[3][3] = {[2, 3, 4],[5, 6, 7],[8, 9, 0]};

    int multi[3][3];

    multiMatrix(3, matrix1, matrix2, multi);

    printMatrix(3, multi);

    return 0;

}