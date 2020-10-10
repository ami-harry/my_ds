#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[2][3];
    int *p;
    // p = arr; //this is invalid in case of 2d array
    // p = &arr[0][0]; //this also means the base address of the array
    // p = arr[0][0]; //this also means the base address of the array
    p = arr[0]; //this also means the base address of the array

    // taking input
    printf("Enter 6 elements for array\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value for row %d and column %d arr[%d][%d]\n", i, j, i, j);
            scanf("%d", &arr[i][j]);
            // scanf("%d", p);
        }
    }
    printf("\n");
    printf("the array is\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("At row %d and column %d or at arr[%d][%d] the value is %d\n", i, j, i, j, arr[i][j]);
            printf("At row %d and column %d or at arr[%d][%d] the value is %d\n", i, j, i, j, *p + i);
        }
    }

    return 0;
}