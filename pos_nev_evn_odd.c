#include <stdio.h>
int main()
{
    int num[10], pos = 0, neg = 0, evn = 0, odd = 0;

    printf("Enter the numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (num[i] < 0)
        {
            neg++;
        }
        else if (num[i] > 0)
        {
            pos++;
        }

        if (num[i] % 2 == 0)
        {
            evn++;
        }
        else
        {
            odd++;
        }
    }

    printf("\nThe positive numbers are %d", pos);
    printf("\nThe negative numbers are %d", neg);
    printf("\nThe even numbers are %d", evn);
    printf("\nThe odd numbers are %d", odd);
    return 0;
}