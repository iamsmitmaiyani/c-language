#include<stdio.h>
main()
{
	int i,j,k,num=1;
	for(i=0;i<5;i++)
	{
		for(k=1;k<=i;k++)
		{	
		printf(" ");
	    }
	    for(j=0;j<5-i;j++)
	    {
	    	printf("%d ",num);
	    	num=1-num;
		}
		printf("\n");
	}
}