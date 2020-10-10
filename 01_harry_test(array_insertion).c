// array insertion at specific position
// swapping all the elements to the right


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
    printf("Enter the pootion:\n ");
    scanf("%d", &pos);
    if (pos<=0 || pos>size)
    {
        printf("Enter valid position\n");
        exit(0);

    }
    else
    {
        for (int i = size-1; i >=pos-1; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos-1]=ele;
        size++;
    }

    // printing the updated array
    for (int i = 0; i < size; i++)
    {
        printf("At Index no  %d the element is %d\n", i, arr[i]);
    }



    return 0;
}
