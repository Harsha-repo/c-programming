// 4 topological sorting

#include<stdio.h>
#include<stdlib.h>
#define n 5

int i,j;
int k = -1;
int top = -1;
int s[n];


int main(){
   

    int adj[n][n];
    int sol[n];
    int indegree[n];

    printf("enter the adjacency matrix :");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&adj[i][j]);
        }
    }

    // indegree claculation

    for(j=0;j<n;j++){
        int sum=0;
        for(i=0;i<n;i++){
            sum=sum+adj[i][j];

        }

        indegree[j]=sum;

    }

    for(int i=0;i<n;i++){
        printf("%d",indegree[i]);
    }
    printf("\n");

    // if the indegree==0 then pushing on to the stack

    for(i=1;i<n+1;i++){
        if(indegree[i]==0){
            top=top+1;
            s[top]=i;
        }
    }
    
    int k=0;

    while(top!=-1){
        int u=s[top];
        top--;
        sol[k++]=u;
        for(j=0;j<n;j++){
            if(adj[u][j]==1){
                indegree[j]--;
                if(indegree[j]==0)
                {
                    s[++top]=j;                
                }
            }
        }
    }


// print the solution array

for(k=0;k<n;k++){

    printf("%d",sol[k]);

}

    
    return 0;
}

// indegree is the number of indcoming edges are there for a vertex
// first we need to input the adjcency matrix
// we need to find the indegree of each valerant
// stack initialization 
// if the indegree of the element is 0 then push on to the stack