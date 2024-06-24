#include<stdio.h>
main()
{
	int r,c;
	printf("Enter Array's rows:");
	scanf("%d",&r);
	printf("Enter Array's column:");
	scanf("%d",&c);
	int i,j,array[r][c];
	printf("Enter array's elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	int largest = array[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(array[i][j]>largest)
			{
				largest=array[i][j];
			}
		}
	}
	printf("\nThe largest elements is:%d\n",largest);
}