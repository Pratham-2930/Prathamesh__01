#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, i;
    int *arr, *brr, *crr;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    arr = (int *)malloc(n1 * sizeof(int));
    brr = (int *)malloc(n2 * sizeof(int));
    crr = (int *)malloc((n1 + n2) * sizeof(int));

    if (arr == NULL || brr == NULL || crr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter first array:\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &arr[i]);

    printf("Enter second array:\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &brr[i]);

    for (i = 0; i < n1; i++)
        crr[i] = arr[i];

    for (i = 0; i < n2; i++)
        crr[n1 + i] = brr[i];

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++)
        printf("%d ", crr[i]);

    free(arr);
    free(brr);
    free(crr);

    return 0;
}

