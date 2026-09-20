#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, num, found = 0;
    int *arr;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            printf("%d found at index %d\n", num, i);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("%d not found\n", num);

    free(arr);

    return 0;
}