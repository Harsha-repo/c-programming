#include<stdio.h>

int main(){

    int a[]={1,3,3,2,1};

    int size = sizeof(a)/sizeof(a[0]);

    int f=0;
    
    for(int i=0;i<size/2;i++){
        if (a[i]==a[size-i-1]){
            f=1;
        }
        else{
            f=0;
            break;
        }
    }

  

    if (f==1){

        printf("its palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}