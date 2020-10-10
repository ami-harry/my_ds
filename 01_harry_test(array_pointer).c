// pointer to array

// taking input with pointer and printing the values using the variable

/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10], size;
    int *ptr=arr;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    if (size<=0 || size>10)
    {
        printf("Invalid size\n");
        exit(0);
    }

    else {
        printf("Enter the elements\n");
        for (int i = 0; i <size; i++)
        {
            scanf("%d", (ptr+i));
        }

    }
    printf("Printing the array elements\n");
    for (int i = 0; i < size; i++)
    {
        // printf("At index %d the value is %d and its address is %p\n", i, *(arr+i), &arr);
        // printf("At index %d the value is %d and its address is %p\n", i, *(ptr+i), ptr);
        printf("At index %d the value is %d and its address is %p\n", i, *(ptr+i), ptr);
    }
    return 0;
}



*/




/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10], size, pos, ele;
    int *ptr=arr;
    printf("Enter the size: ");
    scanf("%d", &size);
    if (size>10 || size<=0)
    {
        printf("Enter valid size");
        exit(0);
    }
    else {
        printf("Enter array elements:\n");
        //taking input in array with pointer
        for (int i = 0; i < size; i++)
        {
            scanf("%d", (ptr+i));
        }
    }

    printf("The original array is\n");
    for (int i = 0; i <size; i++)
    {
        // printf("At index no %d the value is %d and the address is %p\n", i, *(arr+i), (ptr+i));
        // printf("At index no %d the value is %d and the address is %p\n", i, arr[i], &ptr[i]);
        // printf("At index no %d the value is %d and the address is %p\n", i, *(arr+i), &ptr[i]);
        // printf("At index no %d the value is %d and the address is %p\n", i, *(ptr+i), &ptr[i]);
        // printf("At index no %d the value is %d and the address is %p\n", i, *(ptr+i), (ptr+i));
        // printf("At index no %d the value is %d and the address is %p\n", i, ptr[i], (ptr+i));
        printf("At index no %d the value is %d and the address is %p\n", i, *(ptr+i), &(ptr[i]));

    }
    printf("\n");
    printf("Enter the elements to add\n");
    scanf("%d", &ele);
    printf("Enter the position where you want to add");
    scanf("%d", &pos);
    if (pos<=0 ||pos>size)
    {
        printf("Enter valid position");
        exit(0);
    }

    else
    {
        // inserting the elements at specific position
        for (int i =size-1; i >=pos-1; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos-1]=ele;
        size++;
    }

    // printing the updated array
    printf("The updated array is\n");
    for (int i = 0; i < size; i++)
    {
        printf("At index no %d  the value is %d and its address is %p\n", i, *(ptr+i), (ptr+i));
    }

    printf("The inserted item was %d and its address was %p\n", ele, &ele);
    printf("new address of inserted item is %p\n", &arr[pos-1]);
    return 0;
}
*/


// inserting the elements at 0th position


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10], size, del_item, ele;
    int *ptr=arr;
    printf("Enter the size: ");
    scanf("%d", &size);
    if (size>10 || size<=0)
    {
        printf("Enter valid size");
        exit(0);
    }
    else {
        printf("Enter array elements:\n");
        //taking input in array with pointer
        for (int i = 0; i < size; i++)
        {
            scanf("%d", (ptr+i));
        }
    }

    printf("The original array is\n");
    for (int i = 0; i <size; i++)
    {
        printf("At index no %d the value is %d and the address is %p\n", i, *(ptr+i), &(ptr[i]));

    }
    printf("\n");
    printf("Enter the elements to add\n");
    scanf("%d", &ele);

    // inseeting the elements at 0th location
    del_item=arr[0];
    arr[0]=ele;
    size--;
    printf("The updated array is \n");
    for (int i = 0; i <size; i++)
    {
        printf("At index no %d the value is %d and the address is %p\n", i, *(ptr+i), &(ptr[i]));

    }
    printf("the deleted item is %d\n", del_item);
    printf("The address of the deleted item is %p\n", &del_item);

    return 0;
}