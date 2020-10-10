/*\
#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i)
    {
        // condition for non-prime
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (n == 1)
    {
        printf("1 is neither prime nor composite.");
    }
    else
    {
        if (flag == 0)
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int a, i, f;
    printf("Enter a number: ");
    scanf("%d", &a);
    f = 0;
    i = 2;
    while (i <= a / 2)
    {
        if (a % i == 0)
        {
            f = 1;
            break;
        }
        i++;
    }
    if (f == 0)
        printf("Prime Number") else printf("Not Prime Number");
    return 0;
}

*/
#include <stdio.h>
int main()
{
    int n, i, prime;
    // prime 1 means the number is prime no
    printf("Enter number to check prime number or not\n");
    scanf("%d", &n);
    prime = 1;
    i = 2;
    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            prime == 0; //here prime 0 means the number is not prime, becuase it is divisible by 2 to n/2
            break;
        }
        i++;
    }

    if (prime == 1)
    {

        printf("%d is a prime number.", n);
    }
    else
    {

        printf("%d is  not a prime number.", n);
    }

    return 0;
}