#include <stdio.h>

void printBinary(int num)
{
    if (num == 0)
    {
        return;
    }
    printBinary(num / 2);
    printf("%d", num % 2);
}

int main()
{

    int num;

    printf("Enter Number : ");
    scanf("%d", &num);

    printf("Given Number: %d \n", num);

    printf("Binary equivalent: ");
    if (num == 0)
    {
        printf("0");
    }
    else
    {
        printBinary(num);
    }
    printf("\n");

    printf("Octal equivalent: %o\n", num);
    printf("Hexadecimal equivalent: %X\n", num);

    return 0;
}
