#include <stdio.h>
#define Max  10 
void addArrays(int r, int c, int A[][Max], int B[][Max], int C[][Max]) 
{
    for (int i = 0; i < r; i++) 
	{
        for (int j = 0; j < c; j++) 
		{
            C[i][j] = A[i][j] + B[i][j];
        } 
    }
}

int main() {
    int r, c,i,j;
    int A[Max][Max], B[Max][Max], C[Max][Max];
    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);
    printf("\nEnter array A's elements:\n");
    for (i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter array B's elements:\n");
    for ( i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    addArrays(r, c, A, B, C);
    printf("\nArray C is:\n");
    for ( i = 0; i < r; i++) 
	{
        for ( j = 0; j < c; j++) 
		{
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
}
