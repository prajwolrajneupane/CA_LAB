#include <stdio.h>
int main()
{
    int leftc[5];
    int temp;
    int i;
    int arr[5] = {1, 2, 3, 4};
    for (i = 1; i < 4; i++)
    {

        leftc[i - 1] = arr[i];
    }
    temp = arr[0];

    leftc[i - 1] = temp;
    // printf("%d", i);

    for (int j = 0; j < 4; j++)
    {
        printf("%d", leftc[j]);
    }
}
