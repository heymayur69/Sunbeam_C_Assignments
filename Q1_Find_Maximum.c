#include <stdio.h>

int main()
{

    int n;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter The %d Numbers : \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array Elements : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("\nMaximum is : %d", max);

        return 0;
}
