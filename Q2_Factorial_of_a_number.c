#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    long long  factorial = 1;
    printf("Enter a Number : ");
    scanf("%d",&num);

    if (num < 0)
    {
        printf("Error: Factorial not defined for negative numbers!\n");
        return 1;
    }

    if (num == 0 || num == 1)
    {
        printf("Factorial of %d is: 1\n", num);
        return 0;
    }

    for (int i=1; i<=num; i++)
    {

        factorial *= i;

    }

    printf("Factorial of %d is : %lld\n",num,factorial);
    return 0;
}
