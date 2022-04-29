#include <stdio.h>
int main()
{
	int n = 10,bin=0,rem, place=1;
	int temp = n;
	while(temp)
    {
        rem   = temp % 2;
        temp   = temp / 2;
        bin   = bin + (rem * place);
        place = place * 10;
    }
	printf("Binary of %d is %d",n,bin);
	return 0;
}
