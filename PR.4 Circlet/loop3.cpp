#include<stdio.h>
main()
{
	int i,j,k;
	for(i=0;i<=5;i++)
	{
		for(k=0;k<5-i-1;k++)
		{
			printf(" ");
		}
		for(j=i+1;j<=5;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}