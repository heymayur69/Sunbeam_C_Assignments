#include <stdio.h>
#include<math.h>
int main() {
    int rowsA, rowsB, colsA, colsB;
    printf("Enter rows and columns for Matrix A: \n");
    scanf("%d %d",&rowsA, &colsA);


    printf("Enter rows and columns for Matrix B: \n");
    scanf("%d %d",&rowsB, &colsB);

    if (colsA !=rowsB){
        printf("Error: Matrix multiplication not possible!\n");
        printf("columns of A (%d) must be equal to Rows of B (%d) ",colsA,rowsB);
        return 1;
    }

    int A[rowsA][colsA];
    int B[rowsB][colsB];
    int C[rowsA][colsB];

    printf("Enter %d X %d matrix A elements: \n",rowsA,colsA);
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsA; j++)
        {
            scanf("%d",&A[i][j]);
        }

    }

    printf("Enter %d X %d matrix B elements: \n",rowsB,colsB);
    for (int i = 0; i < rowsB; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            scanf("%d",&B[i][j]);
        }

    }


    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < colsA; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }

        }

    }

    printf("\nMatrix A:\n");
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsA; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < rowsB; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix C:\n");
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }



    return 0;
}
