#include<stdio.h>
#include<stdlib.h>

int *ht;
int m,count=0;
void insert(int key , int rem){
    while(ht[rem]!=-1){
        rem = (rem+1)%m;
    }
    ht[rem]=key;
    count++;
}

void display(){
    if(count == 0){
        printf("no elements are there to display");
        return;
    }
    printf("HASH TABLE CONTENTS ARE :");
    for(int i=0;i<m;i++){
        
        printf("\nht[%d]-->%d",i,ht[i]);
    }
}

void  main(){

    int n;
    FILE *fp;
    int key,rem;
    printf("enter how many keys you want to enter :");
    scanf("%d",&n);

    printf("enter the total size of the table :");
    scanf("%d",&m);

    ht = (int *)malloc(m*sizeof(int));

    for(int i=0;i<m;i++){
        ht[i]=-1;
    }

    fp = fopen("p.txt","r");         // initially the file open is done and then we scan each element in loop and insert

    for(int i=0;i<n;i++){
        
        if(count==m){
            printf("the hash table is full and fill");
            break;
        }
        fscanf(fp,"%d",&key);
        rem = key % m;
        insert(key,rem);
    }

    display();
}