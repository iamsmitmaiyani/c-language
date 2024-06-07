#include<stdio.h>
main()
{
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n],i,sum=0,average;
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	average = sum / n;
	printf("Average of the array:%.2d\n",average);
}
