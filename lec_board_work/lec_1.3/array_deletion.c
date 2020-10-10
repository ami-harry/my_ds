// array deletion is same like insertion
// the time complexity and all
// it depends upon the no of positions to be shifted
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50], size, pos, del_item;
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

    printf("Enter the position to delete the element ");
    scanf("%d", &pos);
    if ((pos <= 0) || (pos > size))
    {
        printf("Enter valid position\n");
        exit(0);
    }
    else
    {
        // shifting all the elements to the left till the position
        del_item = arr[pos - 1]; //storing the deleted item
        for (int i = pos - 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    printf("Printing the updated array\n");
    for (int i = 0; i < size; i++)
    {
        printf("At %d index the value is %d\n", i, arr[i]);
    }
    printf("\n");
    printf("The deleted item from position %d is %d\n", pos, del_item);
    return 0;
}
// this algo will take theta(n-p) time complexity
// it need p times shifting, and it increases the time complexity

*/

/*
// deleting from 0th index using all shifting method, this will take theta(n-p) time complexity
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50], size, del_item;
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

    // deleting item from 0th position
    del_item = arr[0];
    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;

    printf("Printing the updated array\n");
    for (int i = 0; i < size; i++)
    {
        printf("At %d index the value is %d\n", i, arr[i]);
    }
    printf("\n");
    printf("The deleted item from 0th index  is %d\n", del_item);
    return 0;
}
// this algo will also take theta(n-p) time complexity, becuase we need p times shifting
*/

/*
// deleting element from last position

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50], size, del_item;
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

    // deleting item last position
    del_item = arr[size - 1];
    size--;

    printf("Printing the updated array\n");
    for (int i = 0; i < size; i++)
    {
        printf("At %d index the value is %d\n", i, arr[i]);
    }
    printf("\n");
    printf("The deleted item from last position  is %d\n", del_item);
    return 0;
}
// this also will take theta(1)  time complexity becuase here no shifting is done

*/

// making our algo better
// we can shift last elemet at deleted position, so we dont need that much shifting
// this algo will take theta(1) complexity

/*
// deleting from nth position without shifting all elements

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50], size, pos, del_item;
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

    printf("Enter the position to delete the element ");
    scanf("%d", &pos);
    if ((pos <= 0) || (pos > size))
    {
        printf("Enter valid position\n");
        exit(0);
    }
    else
    {
        del_item = arr[pos - 1];      //stroing the deleted item
        arr[pos - 1] = arr[size - 1]; //putting the last item on that position
        size--;                       //decreasing the size
    }
    printf("Printing the updated array\n");
    for (int i = 0; i < size; i++)
    {
        printf("At %d index the value is %d\n", i, arr[i]);
    }
    printf("\n");
    printf("The deleted item from position %d is %d\n", pos, del_item);
    return 0;
}
// this algo will take theta(1) time complexity becuase we need only one shifting
*/

/*
// deleting 0th index without shifiting all elements to the left
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50], size, del_item;
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

    printf("\n");
    del_item = arr[0];      //storing the deleted item
    arr[0] = arr[size - 1]; //shifting the last item at 0th position
    size--;                 //decreasing the size
    printf("Printing the updated array\n");
    for (int i = 0; i < size; i++)
    {
        printf("At %d index the value is %d\n", i, arr[i]);
    }
    printf("\n");
    printf("The deleted item from 0th position  is %d\n", del_item);
    return 0;
}
// this algo will take theta(1) time complexity
// this needs only one shifting

*/