#include<stdio.h>
main()
{
	char name[100] = "hello world";
	int i;
	for(i=0;i<11;i++)
	{
		if(name[i]>='a' && name[i]<='z')
		{
			printf("%c",name[i]-32);
		}
		else
		{
			printf("%c",name[i]);
		}
	}
}