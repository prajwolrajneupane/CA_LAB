#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the number:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the number:");
    for (int x = 0; x < n; x++)
    {
        scanf("%d", &arr[x]);
    }

    int rightc[n];
    rightc[0] = arr[n - 1]; // Right shift the last element to the first position

    for (int i = 1; i < n; i++)
    {
        rightc[i] = arr[i - 1]; // Shift each element one position to the right
    }

    printf("The circular right shift of the given number is:");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", rightc[j]);
    }

    return 0;
}
