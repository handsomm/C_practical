#include <stdio.h>
#include<string.h>
int main()
{
    char a[20] = "abbba", v=0;
    int size = strlen(a);
    for(int i = 0;i<size;i++)
    {
        if(a[i]!=a[size-i-1])
        {
            v++;
            break;
        }
    }
    if(v==0)
    {
        printf("String is pallendrom\n");
    }
    else
    {
        printf("Not pallendrom");
    }
    return 0;
}