#include<stdio.h>
int cube(int n)
{
	return n*n*n;
}
int main()
{
	int number,result;
	printf("Enter any number:");
	scanf("%d",&number);
	result = cube(number);
	printf("Cube is:%d\n",result);
	return 0;
	
}
