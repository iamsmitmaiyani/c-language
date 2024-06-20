#include<stdio.h>
main()
{
	int year1,year2,leapyear[100],n=0,i;
	printf("Enter First Year =");
	scanf("%d",&year1);
	printf("Enter Second Year =");
	scanf("%d",&year2);
	for(i = year1; i<=year2;i++)
	{
		if(i%4==0)
		{
			leapyear[n]=i;
			n++;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",leapyear[i]);
	}
}