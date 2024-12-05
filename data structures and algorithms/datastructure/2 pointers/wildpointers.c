// are the uuninitialized pointers and they are arbitrary memory loactions and may cause a profram to misbehave or crash
#include<stdio.h>
int main(){

int *p;
*p = 20;
printf("%p",*p);
    return 0;
}