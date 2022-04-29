#include <stdio.h>
int decbin(int n);
int main()
{
	int n=15;
	int bin=decbin(n);
	printf("Binary of %d is %d",n,bin);
	return 0;
}


int decbin(int n)
{
	int bin=0;
	if(n==0)
	{
		bin=0;
	}
	else
	{
		bin = n%2+(10*decbin(n/2));
	}
	return bin;
}
