#include<stdio.h>
main()
{
	int r,c;
	printf("Enter the array's row size:");
	scanf("%d",&r);
	printf("Enter the array's column size:");
	scanf("%d",&c);
	int i,j,array[r][c];
	printf("Enter array's elements:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	int rownumber;
	printf("\nEnter row number:");
	scanf("%d",&rownumber);
	printf("Elements of row %d:",rownumber);
	int sumrow=0;
	for(j=0;j<c;j++)
	{
		printf("%d",array[rownumber][j]);
		if(j!=c-1)
		{
			printf(", ");
		}
		sumrow += array[rownumber][j];
	}
	printf("\nThe sum of row %d: %d\n",rownumber,sumrow);
	int colnumber;
	printf("\nEnter column number:");
	scanf("%d",&colnumber);
	printf("Elements of column %d: ",colnumber);
	int sumcol = 0;
	for(i=0;i<r;i++)
	{
		printf("%d",array[i][colnumber]);
		if(i!=r-1)
		{
			printf(", ");
		}
		sumcol += array[i][colnumber];
	}
	printf("The sum of column %d:%d\n",colnumber,sumcol);
}