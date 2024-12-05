// is a pointer that points to some non existing memory locations not as NULL
// like when you free up the memory of some pointer then the pointer which was pointing to that memory will be dangliing 
// so what we do is we make it not to dangle but we reinitilise it as  NULL and make its position fixed 
// by this method we can avoid some unpredicatble outputs

#include<stdio.h>
int* func(){

    int a = 10;
    return &a;

}
int main(){
int *ptr = NULL;
 ptr = func();

printf("%d",*ptr);


    return 0;
}
