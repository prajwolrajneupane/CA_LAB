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

    int leftc[n];
    for (int i = 1; i < n; i++)
    {
        leftc[i - 1] = arr[i];
    }
    leftc[n - 1] = arr[0];

    printf("The left shift of the given number is:");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", leftc[j]);
    }

    return 0;
}