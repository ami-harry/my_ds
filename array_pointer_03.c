// %p is used to print the address which is pointer is pointing
//  %u %x are used to print the address
// * is derefferencing operator
// a pointer always holds the address



/*
#include<stdio.h>
int main()
{

    int b=10;
    int *p;
    p=&b;
    printf("The value of b is %d\n", b);
    printf("The address of b is %p\n", &b);
    printf("The address of b which is at pointer is %p\n", p);
    printf("The address of p is %p\n", &p);
    printf("The value of b through pointer is  %d\n", *p);
    return 0;
}
*/


// taking input using pointer and printing the values



#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10], size;
    int *pt=arr;

    printf("Enter the size of the array\n");
    scanf("%d", &size);
    if (size<=0 || size>10)
    {
        printf("Invalid size");
        exit(0);
    }

    else {
        printf("Enter values for the array \n");

        for (int i = 0; i < size; i++)
        {
            // scanf("%d", &arr[i]);

            scanf("%d", (pt+i)); //address of arr and pt is same

            // scanf("%d", (i+pt)); //address of arr and pt is same

            // scanf("%d", (arr+i)); //address of arr and pt is same

            // scanf("%d", (i+arr)); //address of arr and pt is same

            // scanf("%d", &pt[i]); //this is invalid, means address of pointeris different, a pointer is also a variable and it is holding another variable, by using & we are assessing the original address of the pointer , we cant store values on pointer becuase a pointer holds address not values
        }
    }


    // printing the values
    printf("the array elements are\n");
    for (int i = 0; i <size; i++)
    {
        // printf("%d\n", arr[i]); 
        // printf("%d\n", (arr+i));
        // printf("%d\n", (i+arr));
        // printf("%d\n", *(pt+i));
        printf("the value is %d and the address is %p\n", *(i+pt), pt);
    }


    printf("the address of the array is %p\n", arr);
    printf("the address of the pointer pt to the int arr is %p\n", pt);
    printf("the address of the pointer is %p\n", &pt);
    return 0;
}