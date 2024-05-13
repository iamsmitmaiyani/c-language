#include<stdio.h>
main()
{
 int p,r,t,interest;
 printf("Enter the principal=");
 scanf("%d",&p);
 printf("Enter the rate=");
 scanf("%d",&r);
 printf("Enter the time=");
 scanf("%d",&t);
 interest = (p*r*t)/100;
 printf("The simple interest is %d",interest);
}
