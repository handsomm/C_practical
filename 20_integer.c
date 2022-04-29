#include <stdio.h>
void input_list(int *a);
void even_list(int *b);
void odd_list(int *c);
int main()
{
    int A[20];
    input_list(A);
    even_list(A);
    odd_list(A);
    return 0;
}

void input_list(int *a)
{
    printf("Enter all elements\n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", (a+i));
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d\t", *(a+i));
    }
    printf("\n");
}

void even_list(int *b)
{
    int B[20];
    printf("Even list\n");
    for (int i = 0; i < 20; i++)
    {
        if (*(b+i) % 2 == 0)
        {
            B[i] = *(b+i);
            printf("%d\t", B[i]);
        }
    }
    printf("\n");
}

void odd_list(int *c)
{
    int C[20];
    printf("Odd list\n");
    for (int i = 0; i < 20; i++)
    {
        if (*(c+i) % 2 != 0)
        {
            C[i] = *(c+i);
            printf("%d\t", C[i]);
        }
    }
}