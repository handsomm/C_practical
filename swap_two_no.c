#include <stdio.h>
void swap(int a, int b);
int main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("\nBefore swapping a=%d and b=%d", a, b);
    swap(a, b);
    return 0;
}
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping a=%d and b=%d", a, b);
}