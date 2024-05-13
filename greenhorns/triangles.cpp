#include<stdio.h>;
main()
{
	int a,b,c;
	printf("Enter  two angles of triangles: ");
	scanf("%d%d", &a,&b);
	c= 180- (a+b);
	printf("Third angles of the triangels = %d ",c);
}
