// code for comp
#include <stdio.h>
#include <string.h>
int main()
{
    int number = 1010;

    char stringNumber[20];

    sprintf(stringNumber, "%d", number);
    // printf("%s\n", stringNumber);
    int length = strlen(stringNumber);
    int arr[100];

    // printf("%d",length);
    int i;
    int anumber = 0;
    for (i = 0; i < length; i++)
    {
        arr[i] = 1;
        anumber = anumber * 10 + arr[i];
    }
    printf("%d", anumber - number);
    return 0;
}