#include<stdio.h>
main()
{
	int i=1,n;
	{
	
		printf("Enter the number:");
		scanf("%d",&n);
    }
    do
    {
    	if(i%2==0)
    	{
    		printf("%d\n",i);
		}
		i++;
		
	}while(n>=i);
}
