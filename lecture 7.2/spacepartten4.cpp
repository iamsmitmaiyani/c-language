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
		for(j=0;j<(5-i);j++)
		{
			if(j%2==0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			
		    }
		}
		printf("\n");
	}
}
