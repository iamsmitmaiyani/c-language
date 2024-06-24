#include<stdio.h>
main()
{
	int size;
	printf("Enter the array's row and column size:");
	scanf("%d",&size);
	int i,j,array[size][size],transpose[size][size];
	printf("Enter array's elements:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			transpose[j][i] = array[i][j];
		}
	}
	printf("\nThe transpose matrix of an array:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d",transpose[i][j]);
		}
		printf("\n");
	}
}