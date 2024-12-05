#include<stdio.h>
#include<stdlib.h>

int *ht,m,n;
int count=0;
int rem;


void insert(int rem , int key){
    if(ht[rem]!=-1){
        rem = (rem+1)%m;
    }
     ht[rem]=key;
     count++;
}

void display(){
    if(count==0){
        printf("empty");
    }
    for(int i=0;i<m;i++){
        printf("%d  -> %d ",i,ht[i]);
    }
}



void main(){

FILE *fp;
int key;


    printf("enter the number of entries to be fetched:");
    scanf("%d",&n);

    printf("enter the size of the table:");
    scanf("%d",&m);

    ht = malloc(m*sizeof(int));

    for(int i=0;i<m;i++){
        ht[i]=-1;
    }

    fp = fopen("p.txt","r");


    for(int i=0;i<n;i++){

        if(count==m){
            printf("table got filled");
        }

        fscanf(fp,"%d",&key);
        rem = key%m;
        insert(rem,key);
    }
    display();



}