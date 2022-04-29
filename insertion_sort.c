// Insertion sort of array

#include <stdio.h>
int main()
{
    int arr[] = {44, 33, 55, 22, 11};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = (n - 1); j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}