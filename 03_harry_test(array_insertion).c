// inserting the element in 0th index of the array

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10], size, pos, ele;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    if (size>10 || size<=0) {
        printf("Enter valid size");
        exit(0);
    }
    else {

        printf("Enter array elements\n");
        for (int i = 0; i < size; i++)
        {
            printf("element for index no %d ", i);
            scanf("%d", &arr[i]);
        }

    }
    // printing the array element
    for (int i = 0; i < size; i++)
    {
        printf("At Index no  %d the element is %d\n", i, arr[i]);
    }


    // asking the user to input the position and the element
    printf("Enter the element to insert:\n ");
    scanf("%d", &ele);

    // inserting the element at 0th position
    arr[size]=arr[0]; //shifting the 0th element to the last
    size++;
    arr[0]=ele;

    // printing the updated array
    for (int i = 0; i < size; i++)
    {
        printf("At Index no  %d the element is %d\n", i, arr[i]);

    }



    return 0;
}