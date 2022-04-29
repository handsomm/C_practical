// Count the digits of a number enter by key board
#include <stdio.h>
int main()
{
    int n;
    int count = 0;
    printf("enter the number:",n);
    scanf("%d", &n);

    while (n>0)
    {
        // n%10;
        count++;
        n = n/10;
    }
    printf("The number is %d digits.", count);
    

    return 0;
}