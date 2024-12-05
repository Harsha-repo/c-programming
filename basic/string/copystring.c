#include <stdio.h>

int main()
{

    char array[] = "ramanatha";
    char *ptr = array; // here the string value of the array is copied to the ptr and is printed the same string when we call the ptr
    // string copy is happening here
    *ptr = 's'; // this will be pointing the first element of the array and modifyies it with new string
    array[3] = 't';
    // whatever the changes done in the former arraystring same applied to the copied array too hence the changes are seen in both
    int length = strlen(array);
    printf("%d\n", length);
    printf("%s", ptr);

    return 0;
}