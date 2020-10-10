// 2d array
// the collection of array of arrays

// int arr[row][col];
// total no of elements -->rows*col

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[2][3];
    // int arr[2][3]={1,2,3,4,5,6};
    // int arr[2][3]={{1,2,3},{4,5,6}};
    // int arr[][3]={{1,2,3},{4,5,6}};
    // int arr[2][3]={{1,2,3},{4,5,6}}; this is wrong, we cant escape col empty

    // taking input
    printf("Enter 6 elemenets for the array\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element for arr[%d][%d]: ", i, j);
            // scanf("%d", &arr[i][j]);
            scanf("%d", &arr[i][j]); //becuase array is itself a ptr so is holds the base address
        }
    }
    printf("\n");
    // printing the array elements
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("At arr[%d][%d] the value is %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}