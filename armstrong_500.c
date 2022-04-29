// Print all pallendrom nubers between 1 to 500
#include <stdio.h>
#include <math.h>
int main()
{
    int r;

    for (int i = 1; i <= 500; i++)
    {
        int num = i;
        int sum = 0;

        while (num)
        {
            r = num % 10;
            sum += pow(r, 3);
            num = num / 10;
        }
        if (sum == i)
        {
            printf("The number %d is armstrong.\n", i);
        }
    }
    return 0;
}