// are the pointers that does not point to any memory location 
// used for the initialization of the pointer when the pointer has not given any address; i.e like in linked list
// used for handling the errors in malloc functions 
// in contect of the pointer null is a zero 

#include<stdio.h>
int main(){

int a = 4;
int *ptr = NULL;

printf("%p",ptr);

    return 0;
}