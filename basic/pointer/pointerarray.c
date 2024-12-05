#include<stdio.h>
#include<stdlib.h>
int main(){
int*  a[5];
int *ptr ;

for(int i=0;i<5;i++){

    printf("%p\n",&a[i]);
}


    return 0;
}
// pointers size increased in each iteration and the adress of the indexes from 0-4 are printed 