//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() 
{
    int n, isDistinct = 1;

    printf("Enter size of square matrix (n x n):\n");
    scanf("%d", &n);

    int matrix[n][n], diag[n];
    
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
            if (i == j)
            diag[i] = matrix[i][j]; 
        }
    }

 
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (diag[i] == diag[j]) 
            {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct)
            break;
    }
   
    if (isDistinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");
    return 0;
}