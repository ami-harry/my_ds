// array deletion from 0th index


/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[20], size, del_item;
    printf("Enter the array size:   ");
    scanf("%d", &size);
    if (size<=0 || size>=20) {
        printf("Enter valid size\n");
        exit(0);    
    }


    else {
        printf("Enter %d elements for the array \n", size);
        for (int i = 0; i < size; i++)
        {
            printf("Enter element for index no %d:  ", i);
            scanf("%d", &arr[i]);
        }
    }

    printf("The array elements are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("At index no %d the elements is %d:  \n", i, arr[i]);
    }


    del_item=arr[0]; //storing the 0th index value
    size--;
    // for (int i = ; i < size-1; i++)
    // {
    //     arr[i]=arr[i+1];
    //     size--;
    // }

    // printing the deleted element

    printf("Array after deletion");
    for (int i = 0; i <=size; i++)
    {
        printf("At index no %d the elements is %d:  \n", i, arr[i]);
    }

    printf("The deleted item is %d\n", del_item);
    return 0;
}

*/



// another method
// this is unsorted array 
// so no need to check the relative ordering
// simply putting the last element to the 0th index, this is improve time complexity



#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[20], size, del_item;
    printf("Enter the array size:   ");
    scanf("%d", &size);
    if (size<=0 || size>=20) {
        printf("Enter valid size\n");
        exit(0);
    }


    else {
        printf("Enter %d elements for the array \n", size);
        for (int i = 0; i < size; i++)
        {
            printf("Enter element for index no %d:  ", i);
            scanf("%d", &arr[i]);
        }
    }

    printf("The array elements are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("At index no %d the elements is %d:  \n", i, arr[i]);
    }


    del_item=arr[0]; //storing the 0th index value
    size--;
    arr[0]=arr[size];//putting the last element to the 0th index

    // printing the updated array

    printf("The updated array is\n");
    for (int i = 0; i <size; i++)
    {
        printf("At index no %d the elements is %d:  \n", i, arr[i]);
    }

    printf("the deleted element is %d\n", del_item);


    return 0;



}