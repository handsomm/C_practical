#include <stdio.h>
#include <math.h>
int convert(long n);
int main()
{
	long n=1111;
	
	printf("Decimal of %ld is %d",n,convert(n));
	return 0;
}

int convert(long n)
{
	int dec=0,rem;
	for(int i=0;n!=0;i++)
	{
		rem=n%10;
		n=n/10;
		dec=dec+(rem*pow(2,i));
	}
	return dec;
}
