#include<stdio.h>

int strlen(char *ptr)
{
    int counter = 0;
    while (*ptr !=0)
    {
        counter++;
        ptr++;
    }
    
    return counter;
}
void str_cat(char a[],char b[],int n,int m)
{
    char c[30];
    for(int i= 0;i<n;i++)
    {
        c[i]= a[i];
    }
    for(int i= 0;i<m;i++)
    {
        c[i+n] = b[i];
    }
    c[n+m]='\0';

    puts(c);
}
int main()
{
    int n,m;
    char a[]= "harry";
    char b[] = "sahu";
    n= strlen(a);
    m=strlen(b);
    printf("%d %d\n",n,m);
    str_cat(a,b,n,m);
    

    return 0;
}