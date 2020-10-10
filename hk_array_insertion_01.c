// array insertion
// inserting the element at any position/at the start/at the end of the array

// in case of sorted array we have to take care of relative ordering 
// in  casse of unsorted array we insert elements without swapping all the elements at specific position



// making an array as per user input and then printing it, then after
// asking the user to enter position and elements to insert in the array

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[20], size, pos, ele;
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


    // asking the user for the position and the new elements to insert in the array
    printf("Enter the new elements to insert:");
    scanf("%d", &ele);
    /*
            printf("Enter the position where you want to insert");
            scanf("%d", &pos);

            if (pos>size || pos<0)
            {
                printf("Ente valid position\n");
                exit(0);
            }

            // here we are inseeting element at specific position after swapping the elements, this is unsorted array
            // there  is no need to check the bound, so we can easily put the position into last and insert the new element at that position
        */

        /*    else {

                for (int i = size-1; i >=pos-1; i--)
                {
                    arr[i+1]=arr[i];
                }
                arr[pos-1]=ele;
                size++;
            }

        */

        // inseeting the element at sepecific position by swapping the inserting position to the last then inseeting the new element at that position


        /*    else {


                arr[size]=arr[pos-1]; //shifting the inseeting position element to the lst
                size++; //increasing the size
                arr[pos-1]=ele; //inseeting the new element at the swapped position
            }
        */



        /*
                // inserting the new element at 0th index or 1st position
            arr[size]=arr[0];
            size++;
            arr[0]=ele;


        */

        //inseeting element at the last position of the array

    arr[size]=ele;
    size++;
    // printing the updated array 

    for (int i = 0; i < size; i++)
    {
        printf("The index no %d is %d \n", i, arr[i]);
    }

    return 0;
}