// running while loop till n times

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter how many times you want to run the loop: ");
    scanf("%d", &b);

    int i = 0;
    while (i < b)
    {
        printf("for iteration %d the value of a is %d\n", i, a);
        i++; //incrementing the loop
    }

    return 0;
}