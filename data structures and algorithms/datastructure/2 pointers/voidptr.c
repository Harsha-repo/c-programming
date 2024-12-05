// is a pointer with no assocaiated dataype 
// it can point to any data type and can be typecasted to any datatype 
// malloc and calloc returns the void pointer so they can alocate memory to any type of data 
// so when we want memory to be assign these memory to some datatypes there we need to typecast them and use 

#include<stdio.h>
int main(){

int n = 9;
void *ptr = &n;
printf("%d",*(int *)(ptr));  // here is the typecasting of ptr
    return 0;
}