#include<stdio.h>
int top=-1;
int stack[8];

int main(){

    int sol[4];
    int adj[4][4];
    int ind[4];

    printf("enter the adjacency matrix :");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&adj[i][j]);
        }
    }

    // calculating the indegree
    for(int j=0;j<4;j++){
        int sum=0;
        for(int i=0;i<4;i++){
            sum = sum+adj[i][j];
        }

        ind[j]=sum;
    }

    //print the indegre of the array
    for(int i=0;i<4;i++){
        printf("%d",ind[i]);
    }

    // pushing the index whose index==0
    for(int i=0;i<4;i++){
        if(ind[i]==0){
            stack[++top]=i;
        }
    }
    printf("\nstack of top elements initially:");
    for(int i=0;top!=-1;i++){
        printf("%d",stack[top--]);
    }

    int k=-1;

    while(top!=-1){
        int u = stack[top];
        top--;
        sol[++k]=u;
        printf("%d",u);
        for(int j=0;j<4;j++){
            if(adj[u][j]==1){
                ind[j]--;
                if(ind[j]==0){
                    stack[++top]=j;
                }
            }
        }
    }

    printf("\nthe solution array:");
    for(int i=0;i<4;i++){
        printf("%d",sol[i]);
    }

    return 0;
}