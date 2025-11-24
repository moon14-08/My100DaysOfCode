//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main() 
{
    int n, pos, val;
    printf("Enter size of array:\n");
    scanf("%d", &n);

    int arr[n + 1]; 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    printf("Enter position (1 to %d):\n", n + 1);
    scanf("%d", &pos);

    printf("Enter value to insert:\n");
    scanf("%d", &val);
    
    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = val;
    printf("Updated array:\n");
    for (int i = 0; i <= n; i++)
        printf("%d ", arr[i]);

    return 0;
}