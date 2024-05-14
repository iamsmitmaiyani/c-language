#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value of A:");
	scanf("%d",&a);
	printf("Enter the value of B:");
	scanf("%d",&b);
    printf("Enter the value of C:");
	scanf("%d",&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("A is minimum");
		}
		else
		{
			printf("C is minimum ");
		}
	}
	else
	{
		if(b<c)
		{
			printf("B is minimum");
		}
		else
		{
			printf("C is minimum");
		}
	}
	
}
