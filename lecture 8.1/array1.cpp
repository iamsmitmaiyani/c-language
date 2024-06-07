#include<stdio.h>
main()
{
	int n;
	printf("Enter array size: ");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter array element:");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("A=%d ",a[i]);
	}
}
