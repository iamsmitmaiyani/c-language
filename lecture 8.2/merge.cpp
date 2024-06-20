#include<stdio.h>
main()
{
	int i,sizeA,sizeB;
	printf("Enter array A's size:");
	scanf("%d",&sizeA);
	int a[sizeA];
	printf("\nEnter array A's elements:");
	for(i=0;i<sizeA;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter array B's size: ");
	scanf("%d",&sizeB);
	int b[sizeB];
	printf("\nEnter array B's elements:");
	for(i=0;i<sizeB;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
	int sizeC=sizeA+sizeB;
	int C[sizeC];
	for(int i =0;i<sizeA;i++)
	{
		C[i]=a[i];
	}
	for(int i =0;i<sizeB;i++)
	{
	
	C[sizeA+i]=b[i];
    }
    printf("\n Array C is: ");
    for(int i=0;i<sizeC;i++)
    {
    	printf("%d",C[i]);
    	if(i<sizeC-1)
    	{
    		printf(", ");
		}
	}
	printf("\n");
    
}
