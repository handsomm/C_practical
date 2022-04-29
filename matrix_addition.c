#include <stdio.h>
int main()
{
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{3, 4}, {5, 6}};
    int C[2][2];
    printf("Matrix A\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    printf("Matrix C\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}