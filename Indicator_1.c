
#include<stdio.h>

//Write a Program to find the length of a string using a Pointer.

int main() 
{

    char a[100], * ptr,i;
    int count;

    printf("Enter any string = ");
    gets(a);
    
    ptr = &a;
    count = 0;
    
    for(i=0; *ptr!='\0'; i++)
	{
        count++;
        ptr++;
    }

    printf("The length of the string is = %d", count);

}
