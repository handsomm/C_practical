#include <stdio.h>
typedef struct distance
{
    int km;
    int mtr;
} distance;
distance input(distance d, int n);
distance add_distance(distance d1, distance d2);
void display(distance d, int n);
int main()
{
    distance d1, d2, total;
    d1 = input(d1, 1);
    d2 = input(d2, 2);
    display(d1, 1);
    display(d2, 2);
    total = add_distance(d1, d2);
    printf("Total distance is: %d km %d mtr", total.km, total.mtr);
    return 0;
}

distance input(distance d, int n)
{
    printf("Enter the km of distance %d: ", n);
    scanf("%d", &d.km);
    printf("Enter the meter of distance %d: ", n);
    scanf("%d", &d.mtr);

    return d;
}

distance add_distance(distance d1, distance d2)
{
    distance sum;
    sum.km = d1.km + d2.km;
    sum.mtr = d1.mtr + d2.mtr;
    if (sum.mtr >= 1000)
    {
        sum.km = sum.km + (sum.mtr / 1000);
        sum.mtr -= ((sum.mtr / 1000) * 1000);
    }
    return sum;
}

void display(distance d, int n)
{
    printf("The distance %d is: %d km %d mtr\n", n, d.km, d.mtr);
}