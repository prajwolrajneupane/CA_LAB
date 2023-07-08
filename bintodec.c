
// bintodec
//  convert binary to decimal

#include <stdio.h>
#include <math.h>

int convert(int l)
{
    int dec = 0, i = 0, rem;

    while (l != 0)
    {
        rem = l % 10;
        l /= 10;
        dec += rem * pow(2, i);
        i++;
    }

    return dec;
}

int main()
{
    int n;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    printf("%d in binary = %d in decimal", n, convert(n));
    return 0;
}