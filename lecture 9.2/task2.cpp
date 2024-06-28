#include<stdio.h>
#include<string.h>
main()
{
	char email1[100]= "smit123@gmail.com";
	char pass[100]="Smit@123";
	char email[100];
	char password[100];
	printf("Enter your email:");
	gets(email);
	printf("Enter your password:");
	gets(password);
	
	if(strcmp(email1,email) == 0)
	{
		if(strcmp(pass,password) == 0)
		{
			printf("Login Successfull");
		}
		else
		{
			printf("Login fail plz check your password");
		}
	}
	else
	{
		printf("plz check your email id bcoz is not correct");
	}
}
