#include <stdio.h>
typedef struct distance
{
    int feet;
    int inch;
} distance;

distance input(distance d, int n);
void display(distance d, int n);
distance add_distance(distance d1, distance d2);

int main()
{
    distance d1, d2, total;
    d1 = input(d1, 1);
    d2 = input(d2, 2);
    display(d1, 1);
    display(d2, 2);
    total = add_distance(d1, d2);
    printf("Total distance is: %d\'%d\"", total.feet, total.inch);
    return 0;
}

distance input(distance d, int n)
{
    printf("Enter the feet of diatance%d: ", n);
    scanf("%d", &d.feet);
    printf("Enter the inch of diatance%d: ", n);
    scanf("%d", &d.inch);
    return d;
}

distance add_distance(distance d1, distance d2)
{
    distance sum;
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    if (sum.inch >= 12)
    {
        sum.feet = sum.feet + (sum.inch / 12);
        sum.inch -= ((sum.inch / 12) * 12);
    }
    return sum;
}

void display(distance d, int n)
{
    printf("The distance%d is: %d\'%d\"\n", n, d.feet, d.inch);
}