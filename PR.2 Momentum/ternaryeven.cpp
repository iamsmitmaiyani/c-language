#include<stdio.h>
main()
{
	int number;
	printf("Enter any number:");
	scanf("%d",&number);
	(number%2==0)?printf("This number is Even"):printf("This number is odd");
}
