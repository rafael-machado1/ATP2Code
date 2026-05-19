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

void printMatrix(int tamanho, int a[tamanho][tamanho])
{
    for (int i = 0; i < tamanho; i++)
    {
		for (int j = 0; j < tamanho; j++)
		{
			int matrixA = a[i][j];
			printf("%d\t",matrixA);
		}
		printf("\n");
    }
}

int main()
{

    int matrix1[3][3] = {[1, 2, 3],[3, 4, 5],[6, 7, 8]};
    int matrix2[3][3] = {[2, 3, 4],[5, 6, 7],[8, 9, 0]};

    int sum[3][3];

    addMatrix(3, matrix1, matrix2, sum);

    printMatrix(3, sum);

    return 0;

}