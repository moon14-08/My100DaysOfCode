//Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() 
{
    int n;    
    printf("Enter size of square matrix (n x n):\n");
    scanf("%d", &n);

    int matrix[n][n];
   
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        scanf("%d", &matrix[i][j]);

    printf("Main diagonal:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", matrix[i][i]);

    printf("\nAnti-diagonal:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", matrix[i][n - 1 - i]);

    return 0;
}