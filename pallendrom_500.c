// Print all pallendrom numbers between 1 to 500
#include <stdio.h>
int main()
{
    for (int j = 1; j <= 500; j++)
    {
        int n = j, sum = 0;
        int rem;
        for (int i = 0; n > 0; i++)
        {
            rem = n % 10;
            sum = (sum * 10) + rem;
            n = n / 10;
        }
        if (sum == j)
        {
            printf("The number %d is pallendrom.\n", j);
        }
    }
    return 0;
}