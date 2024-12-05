#include<stdio.h>
#define MAX 20
int W[MAX];
short X[MAX];
int d,solutionCount=0;
void subset(int currSum, int k, int remSum)
{
X[k] = 1;
if(currSum+W[k] == d)
{
printf("%d. ",++solutionCount);
for(int i=0;i<=k;++i)
if(X[i]) printf("%d ",W[i]);
printf("\n");
}
else if(currSum+W[k]+W[k+1] <= d)
subset(currSum+W[k],k+1,remSum-W[k]);
if((currSum+remSum-W[k] >= d) && (currSum+W[k+1] <= d))
{
X[k] = 0;
subset(currSum,k+1,remSum-W[k]);
}
}
int main()
{
int N;
printf("Enter No. of Elements: ");
scanf("%d",&N);
int sum=0;
printf("Enter the Subset(in Increasing Order): ");
for(int i=0;i<N;++i){
scanf("%d",&W[i]);
sum += W[i];
}
printf("Enter the Required Sum: ");
scanf("%d",&d);
if(sum >= d){
printf("\nPossible Subsets:-\n");
subset(0,0,sum);
}
else
printf("\nNo Possible Subsets.");
return 0;
}
