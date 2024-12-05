#include<stdio.h>

int main(){

int process[20],bt[20],wt[20],tat[20];
int n ;
float avgwt,avgtat;
printf("enter the number of processes : ");
scanf("%d",&n);

for(int i=0;i<n;i++){

 scanf("%d",&bt[i]);

}

 wt[0]= avgwt= 0 ;
 tat[0]=bt[0]=avgtat;
for(int i=1;i<n;i++){

wt[i]=wt[i-1]+bt[i-1];
tat[i]=tat[i-1]+bt[i];
avgwt = avgwt+wt[i];
avgtat = avgtat+tat[i];
}

printf("\n\t process \tburst time \twaiting time \tturnaround time \n");
for(int i=0;i<n;i++){

    printf("\n\tP%d \t\t %d \t\t %d \t\t %d",i,bt[i],wt[i],tat[i]);

}

    return 0;
}