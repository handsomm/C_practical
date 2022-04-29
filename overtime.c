// Find over time of Employee
#include <stdio.h>
int main()
{
    int hours[10] = {20, 32, 44, 54, 43, 48, 50, 66, 41, 40};
    int overtime[10];
    int overpay[10] = {};
    for(int i = 0;i<10;i++)
    {
        if(hours[i] > 40)
        {
            overtime[i] = hours[i] - 40;
            overpay[i] = overtime[i]*10;
        }
        printf("%d ", overpay[i]);
    }
    return 0;
}