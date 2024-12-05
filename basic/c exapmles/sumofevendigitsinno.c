#include <stdio.h>
int main()
{
    int r, n, sum = 0;
    printf("enter the number :");
    scanf("%d", &n);
    int c = 0;
    while (n != 0)
    {

        if (r % 2 == 0)
            sum = sum + r;
    }
    printf("sum=%d", sum);

    return 0;
}