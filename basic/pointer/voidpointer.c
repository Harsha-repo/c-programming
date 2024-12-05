#include <stdio.h>

int main()
{
    int s = '9';
    char d = 'c';

    void *ptr;
    ptr = &s;
    ptr = &d;
    printf("%d", *(int *)ptr); // before using the pointer in the string statement we need to type cast it properly

    //
    printf("%c", *(char *)ptr);
}
