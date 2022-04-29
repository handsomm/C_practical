#include <stdio.h>

typedef struct time
{
    int hour;
    int min;
    int sec;
} time;

time input(time t, int n);
time addtime(time t1, time t2);
void display(time t, int n);
int main()
{
    time t1, t2, total;
    t1 = input(t1, 1);
    t2 = input(t2, 2);
    display(t1, 1);
    display(t2, 2);
    total = addtime(t1, t2);
    printf("The total time is %d:%d:%d", total.hour, total.min, total.sec);
    return 0;
}

time input(time t, int n)
{
    printf("Enter the hour of time %d: ", n);
    scanf("%d", &t.hour);
    printf("Enter the min of time %d: ", n);
    scanf("%d", &t.min);
    printf("Enter the hour of time %d: ", n);
    scanf("%d", &t.sec);

    return t;
}

time addtime(time t1, time t2)
{
    time sum;
    sum.hour = t1.hour + t2.hour;
    sum.min = t1.min + t2.min;
    sum.sec = t1.sec + t2.sec;
    if (sum.sec >= 60)
    {
        sum.min = sum.min + (sum.sec / 60);
        sum.sec = sum.sec - ((sum.sec / 60) * 60);
    }
    if (sum.min >= 60)
    {
        sum.hour += (sum.min / 60);
        sum.min = sum.min - ((sum.min / 60) * 60);
    }

    return sum;
}

void display(time t, int n)
{
    printf("The time %d is %d:%d:%d\n", n, t.hour, t.min, t.sec);
}