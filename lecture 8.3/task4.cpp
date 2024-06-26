#include <stdio.h>
#define SIZE 5 
void printBoundary(int arr[][SIZE], int size) 
{
    for (int i = 0; i < size; ++i) 
	{
        printf("%d ", arr[0][i]);
    }
    printf("\n");
    for (int i = 1; i < size - 1; ++i) 
	{
        printf("%d       \n", arr[i][size - 1]);
    }
    for (int i = size - 1; i >= 0; --i) 
	{
        printf("%d ", arr[size - 1][i]);
    }
    printf("\n");
    for (int i = size - 2; i >= 1; --i)
	 {
        printf("%d       \n", arr[i][0]);
    }
}
int sumBoundary(int arr[][SIZE], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; ++i) 
	{
        sum += arr[0][i];
    }
    for (int i = 1; i < size - 1; ++i) 
	{
        sum += arr[i][size - 1];
    }

    // Sum bottom row (excluding corners)
    for (int i = size - 1; i >= 0; --i) 
	{
        sum += arr[size - 1][i];
    }
    for (int i = size - 2; i >= 1; --i) 
	{
        sum += arr[i][0];
    }

    return sum;
}

int main() {
    int arr[SIZE][SIZE];
    printf("Enter array's elements:\n");
    for (int i = 0; i < SIZE; ++i) 
	{
        for (int j = 0; j < SIZE; ++j)
		 {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nBoundary elements of the Array:\n");
    printBoundary(arr, SIZE);
    int boundarySum = sumBoundary(arr, SIZE);
    printf("\nSum of boundary elements: %d\n", boundarySum);
    return 0;
}
