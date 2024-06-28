#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
	char password[100];
	int i,cletter = 0,sletter = 0,number = 0,symbol = 0;
	printf("Enter password");
	gets(password);
	
	if(strlen(password)>=6)
	{
		for(i=0;password[i]!=NULL;i++)
		{
			if(password[i]>='A' && password[i]<='Z')
			{
				cletter = 1;
			}
			else if(password[i]>='a' && password[i]<='z')
			{
				sletter = 1;
			}
			else if(password[i]>='0' && password[i]<='9')
			{
				number = 1;
			}
			else
			{
				symbol = 1;
			}
		}
		if(cletter == 1 && sletter==1 && number==1 && symbol==1)
		{
			printf("Your password is strong");
		}
		else
		{
			printf("Your password is not strong");
		}
	}
	else
	{
		printf("Your password is no longer");
	}
}