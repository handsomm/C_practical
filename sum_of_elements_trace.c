#include <stdio.h>
int main()
{
    int A[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(A) / sizeof(A[0]);
    int sum = 0, trace = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sum += A[i][j];
            if (i == j)
            {
                trace += A[i][j];
            }
        }
    }
    printf("Sum of all elements is: %d\n", sum);
    printf("Trace of matrix is: %d\n", trace);
    return 0;
}