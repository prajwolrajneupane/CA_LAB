#include <stdio.h>
#include <string.h>

void onesComplement(char binary[])
{
    int length = strlen(binary);
    int i;
    for (i = 0; i < length; i++)
    {
        if (binary[i] == '0')
        {
            binary[i] = '1';
        }
        else if (binary[i] == '1')
        {
            binary[i] = '0';
        }
    };

    binary[i] = binary[i] + 1;
    if (binary[i] == 2)
    {
        binary[i] = 0;
    }
    printf("%d", binary[i]);
}

int main()
{
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", &binary);

    onesComplement(binary);

    printf("One's complement: %s\n", binary);

    return 0;
}
