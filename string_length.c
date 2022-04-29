#include <stdio.h>
int length(char *p)
{
    int len = 0;
    while (*p != 0)
    {
        len++;
        p++;
    }
    return len;
}
int upper(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}
int lower(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
}
void reverse(char str[], int n)
{
    for (int i = 0; i < (n / 2); i++)
    {
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
}
int main()
{
    char str[] = "Shibu";
    int n = length(str);
    printf("%s\n", str);
    printf("Length of the string=%d\n", n);
    printf("Convert to uppercase\n");
    upper(str);
    printf("%s\n", str);
    printf("Convert to lowercase\n");
    lower(str);
    printf("%s\n", str);
    printf("After reverse\n");
    reverse(str, n);
    printf("%s", str);
    return 0;
}