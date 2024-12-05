#include<stdio.h>
int max[10][10],allocation[10][10],avail[10],need[10][10];
int np,nr,flag;

void main(){

printf("enter the number of process:");
scanf("%d",&np);
printf("\nenter the number of resurces:");
scanf("%d",&nr);

// read allocation  
printf("\nenter the allocation matrix :");
for(int i=0;i<np;i++){
    for(int j=0;j<nr;j++){

        scanf("%d\n",&allocation[i][j]);
    }
}
// max 
printf("\nenter the max matrix :");
for(int i=0;i<np;i++){
    for(int j=0;j<nr;j++){

        scanf("%d\n",&max[i][j]);
    }
}

// need 
for(int i=0;i<np;i++){
    for(int j =0;j<nr;j++){
        need[j][j]=max[i][j]-allocation[i][j];
    }
}

//aavail resourse
printf("enter the avail matrix :");
for(int i=0;i<nr;i++){
    scanf("%d\n",avail[i]);
}


int finish[10],safe_seq[10],k;
for(int i=0;i<np;i++){
    finish[i]=0;
}

for(int i=0;i<np;i++){
    flag=0;
    if(finish[i]==0){
        for(int j=0;j<nr;j++){
            if(need[i][j]>avail[j]){
            flag = 1;
            break;
            }

        }
        if(flag==0){
            finish[i]=1;
            safe_seq[k]=i;
            k++;

            // inrease the avail add the released allocation to avail
            for(int j=0;j<nr;j++)
                avail[j] = avail[j]+allocation[i][j];

            i=-1;
        
       }
    }
}

flag=0;                                                                                                                                                                                                        
for(int i=0;i<np;i++){
    if(finish[i]==0){
        printf("deadlock");
        flag =1;
        break;
    }
}
if(flag==0){
    printf("safe stata seq");
    for(int i=0;i<np;i++){
        printf("p%d",safe_seq[i]);
    }
}
}