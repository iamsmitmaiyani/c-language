#include<stdio.h>
main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
		for(k=0;k<i;k++)
		{
			printf(" ");
		}
		for(j=5;j>i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
