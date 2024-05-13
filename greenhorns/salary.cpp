#include<stdio.h>;
main()
{
	float bs,hra,da,gs,ta;
	printf(" Enter basic salary\n");
	scanf("%f",&bs);
     hra = bs *(10/100.00);
	da =bs *(5/100.00);
	ta =bs *(8/100.00);
	gs =bs +hra +da+ta;
	
	printf("gross salary = %f\n",gs);
	
}
