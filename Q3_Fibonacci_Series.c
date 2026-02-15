#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter how many Fibonacci numbers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    int a = 0, b = 1, next;

    printf("Fibonacci Series: ");

    if (n == 1) {
        printf("%d\n", a);
        return 0;
    }
    else if (n == 2) {
        printf("%d, %d\n", a, b);
        return 0;
    }
    else {  // n >= 3
        printf("%d, %d", a, b);

        for (int i = 3; i <= n; i++) {
            next = a + b;
            printf(", %d", next);
            a = b;
            b = next;
        }
        printf("\n");
    }

    return 0;
}
