#include<stdio.h>

	int add (int x , int y) 
		{
		return x+y;
		}
		int sub (int x , int y)
		{
		return x-y;
		}
	void multi (int x, int y)
		{
		printf("multi = %d",x*y);
		}
		void div (int x, int y){
		printf("div = %d",x/y);
		}
		void modulo (int x, int y){
		printf("modulo = %d",x%y);
		}

main() 
{
int s,a,b;
	do{
		
		printf("\n-----------------------\n");
		printf("Press 1 for addition\n");
		printf("Press 2 substraction\n");
		printf("Press 3 for multiplication\n");
		printf("Press 4 for division\n");
		printf("Press 5 for modulo\n");
		printf("Press 0 for the exit\n");
				
		printf("enter selected number :");
		scanf("%d",&s);
		
		if(s<=5 && s>0){
			
			printf("enter any value  A :");
			scanf("%d",&a);
			printf("enter any value  B :");
			scanf("%d",&b);
			
			switch(s){
				
				case 1:
					printf("sum = %d",add(a,b));
					break;
					
				case 2:
					printf("sub = %d",sub(a,b));
					break;
					
				case 3:
					multi (a,b);
					break;
					
				case 4:
					div (a,b);
					break;
					
				case 5:
					modulo(a,b);
					break;
					
			}
		}
		
	}while(s!=0);
}