#include <stdio.h>
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    int B[size];
    int *p = A;
    int *q = B;
    printf("Array A\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", *(p + i));
    }
    printf("\nReverse of array A\n");
    for (int i = 0; i < size; i++)
    {
        *(q + i) = *(p + (size - 1 - i));
        printf("%d\t", *(q + i));
    }
    return 0;
}