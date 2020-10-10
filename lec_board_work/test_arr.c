#include <stdio.h>
#include <stdlib.h>
int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ch;

    // printing the original array
    for (int i = 0; i < 10; i++)
    {
        printf("At index %d the element is %d\n", i, arr[i]);
    }

    printf("\n");

    printf("Enter which element you want to search: ");
    scanf("%d", &ch);

    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == ch)
        {
            printf("Element %d found at %d index \n", ch, i);
            break;
        }
        else
        {
            printf("Element not found at index %d\n", i);
        }
    }

    return 0;
}