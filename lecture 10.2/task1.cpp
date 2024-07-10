#include<stdio.h>
int sum(int arr[],int size)
{
	int sum =0;
	for(int i=0;i<size;i++)
	{
		sum +=arr[i];
	}
	return sum;
}
int main()
{
	int size;
	printf("Enter array size:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter array elements:\n");
	for(int i=0;i<size;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	int arraysum = sum(arr,size);
	printf("The sum of an array:%d\n",arraysum);
}