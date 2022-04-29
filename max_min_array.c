#include <stdio.h>
void min_max(int A[], int size);
int main()
{
    int A[] = {3, 6, 4, 9, 1, 5, 2};
    int size = sizeof(A) / sizeof(A[0]);
    min_max(A, size);
    return 0;
}

void min_max(int A[], int size)
{
    int max = A[0], min = A[0];
    for (int i = 1; i < size; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    printf("Max=%d and Min=%d in array A\n", max, min);
}