#include <stdio.h>
#include <string.h>

int main()
{

    // char *ptr = "harsha";      //  this is a way we can initialize the string using pointer
    char array[10] = "harsha"; // this is normal one but ptr initializing is like dynamic memory location alllocation
    array[0] = 'v';
    char *ptr = "varsha";

    printf("%s\n", ptr); // iam herer calling the pointer and it is giving the entire string in the array
    // printf("%s",str); but with this it is not possible
    // pointer initialization will not allow single character modification as like array
    // but instead we can modify the entire string at once not character by character
    ptr = "harsha";
    printf("%s", ptr);
    return 0;
}