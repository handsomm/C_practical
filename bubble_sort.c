// Bubble sort of a array

#include <stdio.h>

int print(int A[], int size);
int swap(int *a, int *b);
int bubble(int A[], int size);

int main()
{
    int A[] = {44, 22, 55, 11, 33, 77, 99, 66, 0, 88};
    int size = sizeof(A) / sizeof(A[0]);

    print(A, size);
    bubble(A, size);
    print(A, size);
    return 0;
}

int bubble(int A[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = 0; j < (size - 1 - i); j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(&A[j], &A[j + 1]);
            }
        }
    }
}

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int print(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}