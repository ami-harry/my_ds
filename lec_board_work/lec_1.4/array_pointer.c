// array is itself a pointer
// it always holds the base address

// taking input from the user and printing the array elements
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[20], size;
    int *p;  //pointer p to int
    p = arr; //from now the ptr p is holding the base address of arr[10], means arr[0]
    // taking input from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if ((size <= 0) || (size > 20))
    {
        printf("Enter valid size\n");
        exit(0);
    }
    else
    {
        printf("Enter %d elements for the array\n", size);
        for (int i = 0; i < size; i++)
        {
            printf("Enter the value for %d index: ", i);
            // scanf("%d", &arr[i]);
            // scanf("%d", (arr + i));
            // scanf("%d", (i + arr));
            // scanf("%d", (p + i));//using pointer
            scanf("%d", (i + p));
        }
    }
    printf("\n");
    printf("The array is \n");
    for (int i = 0; i < size; i++)
    {
        // printf("At %d index the value is %d\n", i, arr[i]);
        // printf("At %d index the value is %d\n", i, *(arr + i));
    }
    printf("\n");
    printf("\n");
    // printf("The array is \n");
    for (int i = 0; i < size; i++)
    {
        // printf("At %d index the value is %d\n", i, arr[i]);
        // printf("At %d index the value is %d\n", i, *(arr + i));
        printf("At %d index the value is %d\n", i, *(i + arr));
    }
    printf("\n");
    printf("\n");
    // printf("The array is \n");
    for (int i = 0; i < size; i++)
    {
        // printf("At %d index the value is %d\n", i, arr[i]);
        // printf("At %d index the value is %d\n", i, *(arr + i));
        printf("At %d index the value is %d\n", i, *(i + arr));
    }

    printf("\n");
    printf("\n");
    // printf("The array is \n");
    for (int i = 0; i < size; i++)
    {
        // printf("At %d index the value is %d\n", i, arr[i]);
        // printf("At %d index the value is %d\n", i, *(arr + i));
        // printf("At %d index the value is %d\n", i, *(i + arr));
        printf("At %d index the value is %d\n", i, i[arr]);
    }
    printf("\n");
    printf("\n");
    // printf("The array is \n");
    for (int i = 0; i < size; i++)
    {
        // printf("At %d index the value is %d\n", i, arr[i]);
        // printf("At %d index the value is %d\n", i, *(arr + i));
        // printf("At %d index the value is %d\n", i, *(i + arr));
        // printf("At %d index the value is %d\n", i, i[arr]);
        // using pointer
        printf("At %d index the value is %d\n", i, *(p + i));
    }

    printf("\n");
    printf("\n");
    // printf("The array is \n");
    for (int i = 0; i < size; i++)
    {
        // printf("At %d index the value is %d\n", i, arr[i]);
        // printf("At %d index the value is %d\n", i, *(arr + i));
        // printf("At %d index the value is %d\n", i, *(i + arr));
        // printf("At %d index the value is %d\n", i, i[arr]);
        // using pointer
        // printf("At %d index the value is %d\n", i, *(p + i));
        printf("At %d index the value is %d\n", i, *(i + p));
    }

    printf("\n");
    printf("\n");
    // printf("The array is \n");
    for (int i = 0; i < size; i++)
    {
        // printf("At %d index the value is %d\n", i, arr[i]);
        // printf("At %d index the value is %d\n", i, *(arr + i));
        // printf("At %d index the value is %d\n", i, *(i + arr));
        // printf("At %d index the value is %d\n", i, i[arr]);
        // using pointer
        // printf("At %d index the value is %d\n", i, *(p + i));
        printf("At %d index the value is %d\n", i, i[arr]);
    }

    printf("\n");
    printf("\n");
    // printf("The array is \n");
    for (int i = 0; i < size; i++)
    {
        // printf("At %d index the value is %d\n", i, arr[i]);
        // printf("At %d index the value is %d\n", i, *(arr + i));
        // printf("At %d index the value is %d\n", i, *(i + arr));
        // printf("At %d index the value is %d\n", i, i[arr]);
        // using pointer
        // printf("At %d index the value is %d\n", i, *(p + i));
        printf("At %d index the value is %d\n", i, i[p]);
    }

    printf("\n");
    printf("\n");
    // printf("The array is \n");
    for (int i = 0; i < size; i++)
    {
        // printf("At %d index the value is %d\n", i, arr[i]);
        // printf("At %d index the value is %d\n", i, i[arr]);
        // printf("At %d index the value is %d\n", i, *(arr + i));
        // printf("At %d index the value is %d\n", i, *(i + arr));
        // using pointer
        // printf("At %d index the value is %d\n", i, *(p + i));
        // printf("At %d index the value is %d\n", i, *(i + p));
        // printf("At %d index the value is %d\n", i, i[p]);
        printf("At %d index the value is %d\n", i, p[i]);
    }
    return 0;
}
