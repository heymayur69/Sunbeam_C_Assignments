#include <stdio.h>
#include <string.h>
int main()
{

    char str[100];
    char rev[100];

    printf("Enter String : ");
    scanf("%s", str);

    int len = strlen(str);
    int j = 0;

    for (int i = len - 1; i >= 0; i--)
    {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';

    int ispal = 1;
    for (int i = 0; i < len; i++)
    {
        if (str[i] != rev[i])
        {
            ispal = 0;
            break;
        }
    }
    if (ispal == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}
