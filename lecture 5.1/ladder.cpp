#include<stdio.h>
main()
{
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	if(number<0)
	{
		printf("Number in nagetive");
	
	}
	else if(number==0)
	{
		printf("Number is neutral");
		
	}
	else
	{
		printf("Number is positive");
	}
}
