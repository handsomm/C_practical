// Linear search of an array
#include <stdio.h>
int main()
{
    int n, sch, i;
    printf("How many element you want: ");
    scanf("%d", &n);
    int A[n];
    // Enter all elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Which element you wnat to search: ");
    scanf("%d", &sch);
    // Find the element in the array A
    for (i = 0; i < n; i++)
    {
        if (A[i] == sch)
        {
            break;
        }
    }

    if (i<n)
    {
        printf("The element %d is in the array A", sch);
    }
    else
    {
        printf("The element %d is not in the array A", sch);
    }

    return 0;
}