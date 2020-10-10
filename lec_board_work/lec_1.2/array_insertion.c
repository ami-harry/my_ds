// insertion--> inserting element in the array at specific position
// insert new element at position given by the user
// at 0th index and last index
//
//
//
//

/*
// this program will take input from the user about position and the new element and will print the updated array
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50], size, pos, ele; //declearing the array and size for upper bound check of the array, position to where user want to insert the new element, ele will hold the new element
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
        for (int i = 0; i < size; i++)
        {
            printf("At %d index the value is %d\n", i, arr[i]);
        }
    }
    // asking the position and the new element
    printf("Enter the element which you want to insert: \n");
    scanf("%d", &ele);
    printf("Enter the position at which you want to insert: \n");
    scanf("%d", &pos);
    // inserting the element at specific position
    // we will shift the elements from the given position to the right and will put the element in that position after shifting all the elements

    //
    //
    //
    // checking that the position given by the user is in the range or not
    if ((pos <= 0) || (pos > size))
    {
        printf("Enter valid position\n");
        exit(0);
    }
    //otherwise we are inserting the element at that position
    else
    {

        for (int i = size - 1; i >= pos - 1; i--)
        {
            arr[i + 1] = arr[i]; //shifting the elements to right upto position-1 means index
        }
        arr[pos - 1] = ele; //inserting the element
        size++;             //increasing the size, becuase after insertion size of the array increases
    }

    // now insertion complete and we are printing the updated array
    printf("The updated array is\n");
    for (int i = 0; i < size; i++)
    {
        printf("At %d index the value is %d\n", i, arr[i]);
    }
    // telling the user that this element was inserted at that position
    printf("%d was inserted at %d index\n", ele, pos - 1);
    printf("Array insertion done\n");
    return 0;
}
*/

/*
// inserting the element at 0th position, no need to ask about the position , only ask the element

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50], size, ele;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
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
            scanf("%d", &arr[i]);
        }
        printf("The array  is\n");
        for (int i = 0; i < size; i++)
        {
            printf("At %d index the value is %d\n", i, arr[i]);
        }
    }
    // asking the position and the new element
    printf("Enter the element which you want to insert at 1st position/0th index: \n");
    scanf("%d", &ele);
    // we know the position where to insert
    for (int i = size - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = ele;
    size++;
    printf("The updated array is\n");
    for (int i = 0; i < size; i++)
    {
        printf("At %d index the value is %d\n", i, arr[i]);
    }

    printf("Array insertion at 1st position/0th index is  done, the element was %d\n", ele);
    return 0;
}
*/

/*
// inserting the element at last position, no need to ask about the position , only ask the element

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50], size, ele;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
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
            scanf("%d", &arr[i]);
        }
        printf("The array  is\n");
        for (int i = 0; i < size; i++)
        {
            printf("At %d index the value is %d\n", i, arr[i]);
        }
    }
    // asking the position and the new element
    printf("Enter the element which you want to insert at end of the array: \n");
    scanf("%d", &ele);
    // we know the position where to insert
    arr[size] = ele; //putting the element at last
    size++;
    printf("The updated array is\n");
    for (int i = 0; i < size; i++)
    {
        printf("At %d index the value is %d\n", i, arr[i]);
    }

    printf("Array insertion at end of the array is  done, the element was %d\n", ele);
    return 0;
}
*/

// these algorithm will take theta(n-p) time
// where p means no of position needs to be shifted

// we are dealing with unsorted array, we can make it better
// we can just take the positioned element to the end and put the new element at that position
// it will take theta(1) time complexity becuase we need only one shifting
//
//
//
//
//
/*
// making better algorithm

// inserting element at nth position
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50], size, ele, pos;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
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
            scanf("%d", &arr[i]);
        }
    }
    printf("The array  is\n");
    for (int i = 0; i < size; i++)
    {
        printf("At %d index the value is %d\n", i, arr[i]);
    }

    // asking the position and the new element
    printf("Enter the element which you want to insert: \n");
    scanf("%d", &ele);
    printf("Enter the position at which you want to insert: \n");
    scanf("%d", &pos);
    // checking that the position given by the user is in the range or not
    if ((pos <= 0) || (pos > size))
    {
        printf("Enter valid position\n");
        exit(0);
    }
    //otherwise we are inserting the element at that position
    else
    {
        arr[size] = arr[pos - 1]; //putting the element at end
        arr[pos - 1] = ele;       //inserting the element
        size++;                   //increasing the size
    }

    // now insertion complete and we are printing the updated array
    printf("The updated array is\n");
    for (int i = 0; i < size; i++)
    {
        printf("At %d index the value is %d\n", i, arr[i]);
    }
    // telling the user that this element was inserted at that position
    printf("%d was inserted at %d index\n", ele, pos - 1);
    printf("Array insertion done\n");
    return 0;
}
// this algorithm will take theta(1) time complexity
// becuase here we required only one shifting

*/

/*
//inserting the 0th position without shifting all the elements
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50], size, ele; //we know the position(0)
    printf("Enter the size of the array\n");
    scanf("%d", &size);
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
            scanf("%d", &arr[i]);
        }
    }
    printf("The array  is\n");
    for (int i = 0; i < size; i++)
    {
        printf("At %d index the value is %d\n", i, arr[i]);
    }

    // asking the position and the new element
    printf("Enter the element which you want to insert at 0th index: \n");
    scanf("%d", &ele);

    // shifting the 0th element to the last
    // and inserting the element at 0th and increasing the size
    arr[size] = arr[0];
    arr[0] = ele;
    size++;

    // now insertion complete and we are printing the updated array
    printf("The updated array is\n");
    for (int i = 0; i < size; i++)
    {
        printf("At %d index the value is %d\n", i, arr[i]);
    }
    // telling the user that this element was inserted at that position
    printf("At 0th index %d is inserted\n", ele);
    printf("Array insertion done\n");
    return 0;
}
*/

/*
//inserting at nth position index without shifting all the elements

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50], size, pos, ele;
    printf("Enter the size of the array\n");
    scanf("%d", &size);

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
        for (int i = 0; i < size; i++)
        {
            printf("At %d index the value is %d\n", i, arr[i]);
        }
    }
    // asking the position and the new element
    printf("Enter the element which you want to insert: \n");
    scanf("%d", &ele);
    printf("Enter the position at which you want to insert: \n");
    scanf("%d", &pos);
    // checking that the position given by the user is in the range or not
    if ((pos <= 0) || (pos > size))
    {
        printf("Enter valid position\n");
        exit(0);
    }
    //otherwise we are inserting the element at that position
    else
    {
        arr[size] = arr[pos - 1];
        arr[pos - 1] = ele;
        size++;
    }

    // now insertion complete and we are printing the updated array
    printf("The updated array is\n");
    for (int i = 0; i < size; i++)
    {
        printf("At %d index the value is %d\n", i, arr[i]);
    }
    // telling the user that this element was inserted at that position
    printf("%d was inserted at %d index\n", ele, pos - 1);
    printf("Array insertion done\n");
    return 0;
}

*/