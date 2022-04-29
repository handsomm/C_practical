#include <stdio.h>
void feb(int n);
int main()
{
	int n;
	printf("How many element you want: ");
	scanf("%d",&n);
	feb(n);
	return 0;
}
void feb(int n)
{
	int a=0,b=1,c;
	printf("%d\t%d\t",a,b);
	for(int i=2;i<n;i++)
	{
		c= a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
}
