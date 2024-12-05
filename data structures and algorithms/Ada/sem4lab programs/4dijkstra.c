//  input : a given deirected weighted  graph and numbebr o fnodes 
// output : casot fromm source vertex to every other node 
// to find the shortest path of all nodes from the given source node using given adj matrix 




#include<stdio.h>
#include<stdlib.h>
#define inf 999

int main(){

    int N;
    printf("no. of nodes :");
    scanf("%d",&N);

    int adj[N][N];

    printf("Enter the cost adjacency matrix:");
    for(int i=0;i<N;++i)
        for (int j=0;j<N;++j){
            scanf("%d",&adj[i][j]);
            adj[i][j]= (adj[i][j]==0 && i!=j)?inf:adj[i][j]; 
        }
    
    // imput of sourve node
    int src ;
    printf("enter the source node:");
    scanf("%d",&src);


// s : visit arra , d : distanves of v vertices from src vertec , p : store the previous of i
    int s[N],d[N],p[N];

    for(int i=0 ;i<N;++i){
        s[i]=0;
        d[i]=adj[src][i];
        p[i]=src;

    }

    s[src]=1; // already visited source node

    int mincost , u ;
    for(int i=0;i<N-1;++i){
        mincost = inf;
        for(int j=0;j<N;++j)
            if(d[j]<mincost && !s[j]){
                mincost = d[j];
                u=j;
            }
            s[u]=1;

            for(int v=0;v<N;++v)
            {
                if(s[v])
                continue;

                if(d[v] > d[u]+adj[u][v])
                    d[v] = d[u]+adj[u][v];

                p[v]=u;
            }
        }

        printf("single source shortest paths :");
        for(int i=0;i<N;++i){
            printf("%d=>%d : (%d)\n",src,i,d[i]);
        }
    

    return 0;
}