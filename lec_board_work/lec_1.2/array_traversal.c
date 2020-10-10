// traversal means visiting all array elements at once

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50], size; //declearing the array and size for upper bound check of the array
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    // checking the size given by the user, if the size is more than the array size then exit the program else take input from the user
    if ((size <= 0) || (size > 50))
    {
        printf("Enter valid size for the array\n");
        exit(0);
    }
    else
    {
        printf("Enter %d elements of the array\n", size);
        for (int i = 0; i < size; i++)
        {
            printf("Enter the value for %d index: \n", i);
            scanf("%d", &arr[i]); //taking input
        }
        // printing the array
        printf("The array  is\n");
        // this is called traversal
        for (int i = 0; i < size; i++)
        {
            printf("At %d index the value is %d\n", i, arr[i]);
        }
    }
    printf("Array traversal complete\n");

    return 0;
}