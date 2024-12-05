#include <stdio.h>
#include <string.h>

int main()
{
    int size = 0, j = 0;
    char str[50], reverse;
    printf("enter a number:");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        size++;
    }

    printf("the size is : %d\n", size);
    printf("the reversed number is :");
    for (j = size - 1; j >= 0; j--)
    {

        printf("%c", str[j]);
    }

    return 0;
}