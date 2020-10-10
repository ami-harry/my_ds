#include <stdio.h>
void linear_search(int arr[], int size);
int main()
{

    int arr[10] = {6, 23, 54, 87, 96, 45, 76, 34, 74, 93};
    linear_search(arr, 10);
    return 0;
}

void linear_search(int arr[], int size)
{
    int val;
    printf("Enter element to find\n");
    scanf("%d", &val);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == val)
        {
            printf("%d found at %d index\n", val, i);
            break;
        }
        else
        {
            printf("Element not found at %d index \n", i);
            break;
        }
    }
}
