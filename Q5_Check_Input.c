#include <stdio.h>

int main() {
    char ch;
    int uppercase = 0, lowercase = 0, digit = 0, others = 0;

    printf("Enter Characters: ");


    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            uppercase++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            lowercase++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else
        {
            others++;
        }

    }

    printf("UpperCase Letters: %d \n", uppercase);
    printf("LowerCase Letters: %d \n", lowercase);
    printf("Digits: %d \n", digit);
    printf("Others: %d \n", others);

    return 0;
}
