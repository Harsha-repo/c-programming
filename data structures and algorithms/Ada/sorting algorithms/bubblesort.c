#include<stdio.h>
int main(){
    int n=5;
    int a[5]={1,4,3,5,2};
    int temp;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
            
        }
    }
    
    for(int i=0;i<5;i++){
        printf("%d",a[i]);        
    }

    return 0;
}

// mathemetical analysis of the algorithm and find the complexity of the algorithm