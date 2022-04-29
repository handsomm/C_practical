// Write a programm to check it is palendrom or not

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n, pan = 0;
    while (n > 0)
    {
        int r = n % 10;
        pan = r + (pan * 10);
        n = n / 10;
    }

    if (pan == temp)
    {
        printf("Number %d is palendrom",temp);
    }
    else
    {
        printf("Number %d is not palendrom",temp);
    }

    return 0;
}