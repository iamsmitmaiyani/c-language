#include<stdio.h>
main()
{
	int first_number,last_number;
	printf("Enter the first number:");
	scanf("%d",&first_number);
	printf("Enter the last number:");
	scanf("%d",&last_number);
	while (first_number<=last_number)
	{
		if(first_number%4==0)
		{
			printf("%d\n",first_number);
		    
		}
	first_number++;
	}
}
