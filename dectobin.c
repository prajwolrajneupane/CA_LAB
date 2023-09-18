#include <stdio.h>

int to_bin(int n)
{
    int binary = 0, digit, place = 1;

    while (n > 0)
    {
        digit = n % 2;
        binary += digit * place;
        place *= 10;
        n /= 2;
    }

    return binary;
}

int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    int binary = to_bin(n);
    printf("%d in decimal = %d in binary", n, binary);

    return 0;
}
