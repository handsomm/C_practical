/* Print the partten
    A B C D E F G F E D C B A 
    A B C D E F   F E D C B A 
    A B C D E       E D C B A 
    A B C D           D C B A 
    A B C               C B A 
    A B                   B A 
    A                       A 
*/

#include <stdio.h>
int main()
{
    int n = 71;
    for (int i = n; i >= 65; i--)
    {
        for (int j = 65; j <= n; j++)
        {
            if (j <= i)
            {
                printf("%c ", j);
            }
            else
            {
                printf("* ");
            }
        }

        for (int k = n - 1; k >= 65; k--)
        {
            if (k > i)
            {
                printf("  ");
            }
            else
            {
                printf("%c ", k);
            }
        }

        printf("\n");
    }
    return 0;
}