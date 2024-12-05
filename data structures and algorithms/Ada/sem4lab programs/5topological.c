#include<stdio.h>


int main(){

    int t[10];
    int indegree[10];
int n,i,j;
    printf("No. of Nodes: ");
scanf("%d",&n);
int A[n][n];
for(i=0;i<n;++i)
indegree[i] = 0;

printf("Enter the Adjacency Matrix:-\n");
for(i=0;i<n;++i)
for(j=0;j<n;++j){
scanf("%d",&A[i][j]);
if(A[i][j]==1) ++indegree[j];
}

int k = 0;
    for(int i=0;i<n;++i){

        if(indegree[i]==0){
            indegree[i] = -1;
            t[k++] = i;

            for(int j = 0;j<n;++j){
                if(A[i][j]==1 && indegree[j]!=-1)
                indegree[j]--;
            }
            i=-1;
              }
    }

if(k == n)
{
printf("\nTopological Ordering is: ");
for(i=0; i<k; ++i)
printf("%d ",t[i]);
}



    printf()

    return 0;
}