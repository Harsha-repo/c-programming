#include<stdio.h>
#define MAX 50


typedef struct{
    int profit,weight;
    double ratio;
    int index;
} Item ;

int main(){

    int N;

    printf("enter the no of objects:");
    scanf("%d",&N);

    Item items[N];

    printf("enter the  profits:");
    for(int i=0;i<N;++i){
        scanf("%d",&items[i].profit);
    }

    printf("enter the weights:");
    for(int i=0;i<N;++i){
        scanf("%d",&items[i].weight);
        items[i].ratio = (double)items[i].profit / items[i].weight;
        items[i].index = i;

    }

    int M;
    printf("enter the max capacity :");
    scanf("%d",&M);


  
  // sort in descending order

    for(int i=0;i<N;++i){
    for(int j = i+1;j<N;++j)
    {
        if(items[i].ratio < items[j].ratio){
            Item temp = items[i];
            items[i] = items[j];
            items[j] = temp;

        }
     }
    }

    int current_weight = 0;
    double maxprofit = 0;
    double x[MAX] = {0.0};

    for(int i=0;i<N;++i){
        if(current_weight + items[i].weight <= M){

            x[items[i].index] = 1.0;
            maxprofit += items[i].profit;
            current_weight += items[i].weight;

        }

        else
        {
            x[items[i].index] = (M-current_weight)/(double)items[i].weight;
            maxprofit += x[items[i].index]*items[i].profit;
            break;
        }
    }

        printf("optimal solution :%.1f",maxprofit);
    printf("\n solution vector x[]:");
    for (int i=0;i<N;++i)
    printf("%.1f,",x[i]);


    return 0;
}

