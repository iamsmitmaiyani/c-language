#include <stdio.h>
int main() 
{
    int r, c;
    double sum = 0.0;
    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c); 
    int a[r][c];
    printf("\nEnter array's elements:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }
    double average = sum / (r * c);
    printf("\nAverage of an Array: %.2lf\n", average);
}
