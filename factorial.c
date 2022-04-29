#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0)
    {
        fact = 1;
    }

    for (int i = n; i > 0; i--)
    {
        fact *= i;
    }

    printf("The factorial is: %d", fact);

    return 0;
}