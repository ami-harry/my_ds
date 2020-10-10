// deleting the element of the array from any poisition
// we will not swap all the values
// we will simply put the last value on that poisition

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10], size, pos, del_item;
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
    printf("Enter the position to delete the item");
    scanf("%d", &pos);
    if (pos>size || pos<=0)
    {
        printf("invalid size\n");
        exit(0);
    }
    else {
        del_item=arr[pos-1];
        arr[pos-1]=arr[size-1]; //putting the last element on the position
        size--;
    }

    printf("The updated array is \n");
    for (int i = 0; i < size; i++)
    {
        printf("At Index no  %d the element is %d\n", i, arr[i]);

    }
    printf("The deleted item was %d\n", del_item);

    return 0;
}
