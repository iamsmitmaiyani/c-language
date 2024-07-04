#include<stdio.h>
int getData(int num)
{
	if(num % 3 == 0 && num % 5 ==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int number;
	printf("Enter any number:");
	scanf("%d",&number);
	if(getData(number))
	{
		printf("The given number is divisible by both 3 & 5.\n");
		
	}
	else
	{
		printf("The given number is not divisible by both 3 & 5.\n");
	}
	return 0;
}