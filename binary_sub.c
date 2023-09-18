#include <stdio.h>
int main()
{
    int size = 4, i;
    int num1[size], num2[size], result[size];
    printf("Enter 1st binary no of 4 bits: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &num1[i]);
    }
    printf("Enter 2nd binary no of 4 bits ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &num2[i]);
    }
    printf("Binary subtraction ");

    int borrow = 0;
    for (i < size - 1; i >= 0; i--)
    {
        int sub = num1[i] - num2[i] - borrow;
        if (sub < 0)
        {
            result[i] = 1;
            borrow = 1;
        }

        else
        {
            result[i] = sub;
            borrow = 0;
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d", result[i]);
    }
}