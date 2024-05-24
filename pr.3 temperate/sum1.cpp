#include<stdio.h>
main()
{
	int i,n,f,l,sum;
	printf("Enter the number:");
	scanf("%d",&n);
	l = n%10;
	while(n>=10)
	{
		n /= 10;
	}
	f=n;
	sum =l + f;
	printf("Sum of two digit is =%d",sum);
}
