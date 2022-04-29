// Selection sort of array

#include <stdio.h>

int print(int A[], int size);
int swap(int *a, int *b);
int selection(int A[], int size);

int main()
{
    int A[] = {55, 33, 77, 88, 11, 22, 44, 99, 0, 66};
    int size = sizeof(A) / sizeof(A[0]);
    print(A, size);
    selection(A, size);
    print(A, size);
    return 0;
}

int selection(int A[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        int minx = i;
        for (int j = (i + 1); j < size; j++)
        {
            if (A[j] < A[minx])
            {
                minx = j;
            }
        }
        swap(&A[i], &A[minx]);
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