#include<stdio.h>
#include<stdlib.h>

void main(){
    
    int i,j,n,temp,p[5],bt[5],wt[5],tat[5];
    float tatavg,wtavg;
    
    printf("enter the number of processs:");
    scanf("%d",&n);
     printf("enter the  precess num :\n");
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    printf("enter the burst time of precess:\n");
    for(i=0;i<n;i++){
        scanf("%d",&bt[i]);
    }
   
    
    // we solve the sjf by sorting the burst time using bubble sort and then we apply the scheduling 
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            
            if(bt[j]>bt[j+1]){
                temp = bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=temp;
                
                temp = p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
            
        }
    }
    // printf("process \t busrt time \t wating time \t turn around time\n");
    // for(i=0;i<n;i++){
    //     wt[i]=0;
    //     tat[i]=0;
    //     for(j=0;j<i;j++){
    //         wt[i]=wt[i]+bt[j];
    //     }
    //     tat[i]=wt[i]+bt[i];
    //     wtavg = wtavg+wt[i];
    //     tatavg = tatavg +tat[i];
    //     printf("%d\t     %d\t\t     %d\t\t     %d\n",p[i],bt[i],wt[i],tat[i]);
    //     }
    // }

printf("process     burst time     waiting time                turn around time  \n");
    for (i = 0; i < n; i++)
    {
        wt[i] = 0;
        tat[i] = 0;
        for (j = 0; j < i; j++)
        {
            wt[i] = wt[i] + bt[j];
        }
        tat[i] = wt[i] + bt[i];
        wtavg = wtavg + wt[i];
        tatavg = tatavg + tat[i];
        printf("%d\t   | \t%d      | \t\t%d    |\t\t\t%d      |\n", i + 1, bt[i], wt[i], tat[i]);
    }
    wtavg =wtavg / n;
    tatavg = tatavg / n;
    printf("average waiting time :%f ", wtavg);
    printf("average turn around time is :%f", tatavg);
}

