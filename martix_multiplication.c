#include <stdio.h>
void input_matrix(int M[2][2]);
void print_matrix(int M[2][2]);
void matrix_mult(int A[2][2], int B[2][2], int C[2][2]);
int main()
{
    int A[2][2], B[2][2], C[2][2];

    printf("Enter elementrs of matrix A\n");
    input_matrix(A);
    printf("Enter elementrs of matrix B\n");
    input_matrix(B);
    printf("Matrix A\n");
    print_matrix(A);
    printf("Matrix B\n");
    print_matrix(B);
    matrix_mult(A, B, C);
    printf("Matrix C\n");
    print_matrix(C);
    return 0;
}

void input_matrix(int M[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter A%d%d: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }
}

void print_matrix(int M[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
}

void matrix_mult(int A[2][2], int B[2][2], int C[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}