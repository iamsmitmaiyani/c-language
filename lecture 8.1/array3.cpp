#include<stdio.h>
main()
{
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n],b[n],c[n],i;
	printf("Enter elements for A:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Enter elements for B:\n");
	for(i=0;i<n;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
	printf("Array c is:\n");
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf("%d",c[i]);
		if(i!=n-1)
		printf(", ");
	}
printf("\n");		
}
	

