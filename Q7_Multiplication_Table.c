#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);

    if (n <= 0)
    {
        printf("Error: Enter the Positive Number");
        return 1;
    }

    printf("The Multiplication Table of %d \n",n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}




