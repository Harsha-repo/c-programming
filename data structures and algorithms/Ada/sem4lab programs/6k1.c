#include<stdio.h>
#define max(x, y) (x > y ? x : y)


int main()
{
int N;
printf("Enter No. of Objects: ");
scanf("%d",&N);
int profit[N];
printf("Enter Profits: ");
for(int i=0;i<N;++i)
scanf("%d",&profit[i]);
int weight[N];
printf("Enter Weights: ");
for(int i=0;i<N;++i)
scanf("%d",&weight[i]);

int M;
printf("Enter Knapsack Capacity: ");
scanf("%d",&M);



int dp[N+1][M+1];
int i,w;

//Build the DP Table
for(i=0; i<=N; ++i)
for(w=0; w<=M; ++w)
{
if(i == 0 || w == 0)
dp[i][w] = 0;

else if(w >= weight[i-1])
dp[i][w] = max(dp[i-1][w],profit[i-1]+dp[i-1][w-weight[i-1]]);

else
dp[i][w] = dp[i-1][w];

}

int result=dp[N][M];

printf("\nMaximum Profit: %d",result);

return 0;

}