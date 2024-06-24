#include<stdio.h>
main()
{
	int size;
	printf("Enter the Array's size:");
	scanf("%d",&size);
	int array[size],i;
	printf("Enter Array's elements:\n");
	for(i=0;i<size;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&array[i]);
	}
	printf("\nnegative elements from an Array:");
	
		for(i=0;i<size;i++)
		{
			if(array[i]<0)
			{
				printf("%d,",array[i]);
			}
		}
	printf("\n");
}