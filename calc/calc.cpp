#include<stdio.h>
void calc()
{
	int choice,a,b;
	printf("Enter the value of A:");
	scanf("%d",&a);
	printf("Enter the value of B:");
	scanf("%d",&b);
	do
	{
		printf("Enter Your choice:");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1: 
			    printf("Addition of A+b=%d\n",a+b);
			    break;
			case 2:
				printf("Substrction of A-B=%d\n",a-b);
				break;
			case 3:
				printf("Multiplication of A*B=%d\n",a*b);
				break;
			case 4:
				printf("Division of A/B=%d\n",a/b);
				break;
			case 5:
				printf("Moduls of A%B=%d\n",a%b);
				break;
			case 6:
				printf("Exit...");
				break;
			default:
				printf("Enter valid choice");
		}
	}while(choice!=0);
}
main()
{
	printf("Press 1 for addition.\n");
	printf("Press 2 for substrct.\n");
	printf("Press 3 for multiplication.\n");
	printf("Press 4 for division.\n");
	printf("Press 5 for moduls.\n");
	printf("Press 0 for Exit.\n");
    calc();
}