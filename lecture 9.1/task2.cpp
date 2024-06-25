#include<stdio.h>
main()
{
	char name[100] = "HELLO WORLD";
	int i;
	for(i=0;i<11;i++)
	{
		if (name[i]>='A' && name[i]<='z')
		{
			printf("%c",name[i]+32);
		}
		else
		{
			printf("%c",name[i]);
		}
	}
}