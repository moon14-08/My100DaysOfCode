//Read and print a matrix.
#include <stdio.h>
int main() 
{
    int rows, colu;
    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &rows, &colu);

    int matrix[rows][colu];
   
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < colu; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

   
    printf("Matrix is:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < colu; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}