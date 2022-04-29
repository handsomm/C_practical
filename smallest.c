#include <stdio.h>
int main()
{
    int arr[] = {1, 4, 2, 6, 8}, small = arr[0], n;

    n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }

    printf("Smallest element is: %d", small);
    return 0;
}ko