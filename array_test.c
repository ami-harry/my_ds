// inserting  data  in the array
// asking the position and element and printing the updated array

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[20], ele, pos, size;
    printf("Enter the size of the array\n");
    scanf("%d", &size);

    if (size <= 0 || size > 20)
    {
        printf("array size is overflowing\n");
        exit(0);
    }

    else
    {
        printf("Enter the array elements: ");
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
    }
    // printing the original array
    printf("The array is");
    for (int i = 0; i < size; i++)
    {
        printf("[%d]", arr[i]);
    }
    printf("\n");
    printf("Entre the element");
    scanf("%d", &ele);
    printf("Enter the position");
    scanf("%d", &pos);

    // shifing all the element from last to the position
    /*
    
    for (int i = size - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = ele;
    size++;

 */

    // swapping the pos value to last and inserting the new element at the position
    // this is unsorted array so we can do this

    arr[pos - 1] = arr[size];
    arr[pos - 1] = ele;
    size++; //shifing the element
    printf("the updated array is");
    for (int i = 0; i < size; i++)
    {
        printf("[%d]", arr[i]);
    }
    printf("\n");
    return 0;
}
