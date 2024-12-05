// also called as linear search

#include<stdio.h>

int main(){

    int a[10]={1,2,3,4,3,5,8,9,7,11};
    int key;
    printf("enter the key value:");
    scanf("%d",&key);

    for(int i=0;i<10;i++){
        if(a[i]==key){
            printf("key is found at %d",i);
            break;
        }
    }
    return 0;
}