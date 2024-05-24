#include<stdio.h>
main()
{
	int i=0,n;
	printf("Enter the number:");
	scanf("%d",&n);
	do {
		n /= 10;
		++i;  
	   }while(n != 0);
	printf("Number of digits:%d",i);
}
