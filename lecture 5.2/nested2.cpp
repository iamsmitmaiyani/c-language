#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter the value of A:");
	scanf("%d",&a);
	printf("Enter the value of B:");
	scanf("%d",&b);
	printf("Enter the value of C:");
	scanf("%d",&c);	
	printf("Enter the value of D:");
	scanf("%d",&d);
	if (a>b)
	{
	 if(a>c)
	 {
	 	if(a>d)
	 	{
	 		printf("A is Max");
		}
		else
		{
			printf("D is MAx");
		}
	 }	
	 else
	 {
	 if (c>d)
	   {
	 	printf("C is Max");
	   }	
	 else
	   {
	 	printf("D is Max");
	   }
	 }
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("B is MAx");
			}
			else
			{
				printf("D is MAX");
			}
		}
		else
		{
			if(c>a)
			{
				if(c>d)
				{
					printf("C is Max");
				}
				else
				{
					printf("D is Max");
				}
			}
			else
			{
				if(a>d)
				{
				 printf("A is Max");
				}
				else
				{
					printf("D is Max");
				}
			}
		}
	}
}
