//Insert an element in an array at a given position.
#include<stdio.h>
int main()
{
    int n, pos, value;

    printf("Enter size of array:\n");
    scanf("%d", &n);

    int arr[100]; 

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to insert (1 to %d):\n", n+1);
    scanf("%d", &pos);

    printf("Enter value to insert:\n");
    scanf("%d", &value);

    for(int i = n; i >= pos; i--) 
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value; 
    n++; 

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

