#include <stdio.h>
#define Max 10 
int sumDiagonal(int size, int arr[][Max]) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
	{
        sum += arr[i][i];
    }
    return sum;
}
int main() 
{
    int size;
    int arr[Max][Max],i,j;
    printf("Enter the array's row & column size: ");
    scanf("%d", &size);
    printf("\nEnter array's elements:\n");
    for ( i = 0; i < size; i++) 
	{
        for (j = 0; j < size; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int diagonalSum = sumDiagonal(size, arr);
    printf("\nThe sum of diagonal elements of the Array: %d\n", diagonalSum);
}
