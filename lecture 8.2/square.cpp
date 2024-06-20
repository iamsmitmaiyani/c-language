#include<stdio.h>
main()
{
	int size,i;
	printf("Enter array size: ");
	scanf("%d",&size);
	int array[size];
	printf("Enter array elements:\n");
	for(i=0;i<size;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&array[i]);
	}
	printf("\nThe squares are: ");
	for(i=0;i<size;i++)
	{
		printf("%d",array[i]*array[i]);
		if(i!=size -1)
		{
			printf(", ");
		}
	}
	printf("\n");
}