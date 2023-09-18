#include <stdio.h>

int main()
{
    int size = 4;
    int i;
    int num1[size], num2[size], result[size + 1];
    int resultsize = size;

    printf("Enter the first binary no of %d bits\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &num1[i]);
    }

    printf("Enter the second binary no of %d bits\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &num2[i]);
    }

    printf("Binary addition\n");
    int carry = 0;
    for (i = size - 1; i >= 0; i--)
    {
        int sum = num1[i] + num2[i] + carry;
        result[i + 1] = sum % 2;
        carry = sum / 2;
    }

    if (carry == 1)
    {
        result[0] = 1;
        resultsize++;
    }

    printf("Result is: ");
    for (i = 0; i < resultsize; i++)
    {
        printf("%d", result[i]);
    }
    printf("\n");

    return 0;
}
