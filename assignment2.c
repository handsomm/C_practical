#include <stdio.h>
int main()
{
    int n = 71, m = -1, a = 71;
    // int c=65;
    for (int i = n; i >= 65; i--)
    {
        for (int j = 65; j <= i; j++)
        {
            if (j != 71)
            {
                printf("%c ", j);
            }
        }
        for (int k = m; k > 0; k--)
        {
            printf("  ");
        }
        m += 2;

        for (int l = a; l >= 65; l--)
        {
            printf("%c ", l);
        }
        a--;

        printf("\n");
    }

    return 0;
}