#include<stdio.h>
#include<stdlib.h>

int main(){
int n;
printf("Enter the size of the memory :");
scanf("%d",&n);
int *ptr = (int* )malloc(n*sizeof(int));

for(int i=0;i<n;++i){
printf("%p\n",&ptr[i]);  // the memory of block size n with size of int is formed and address is printed 
   
}
return 0;
}

// shows that memory allocation is occured as per size ofint 