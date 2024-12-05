#include<stdio.h>
#include<stdlib.h>

int key[20],n,m,*ht,index,count=0;

void insert(int key){
    index = key %m;

    while(ht[index]!=-1){
        index = (index+1)%m;
        
    }ht[index]=key;
    count++;

}


void display(){
    int i;
    if(count==0){
        printf("\nhash table is empty");
        return ;

    }

    printf("\nhash table contents are :\n");
    for(i=0;i<m;i++)
    {
        printf("\n  T[%d]->%d",i,ht[i]);
    }
}

void main(){
    int i;
    printf("\n Enter the number of employees records(N):");
    scanf("%d",&n);

    printf("\n Enter the two digits memory locations(m) for hash table :");
    scanf("%d",&m);

    ht =(int*) malloc(m*sizeof(int));

    for(i=0;i<m;i++)
    {
        ht[i]=-1;
    }
    printf("\n enter the four digit key values(k)for N employee records\n");
    for(i=0;i<n;i++){
        scanf("%d",&key[i]);
    }
    for(i=0;i<n;i++){
        if(count==m){
            printf("\n---hash table is full");
            break;
        }insert(key[i]);
    }
    display();
}