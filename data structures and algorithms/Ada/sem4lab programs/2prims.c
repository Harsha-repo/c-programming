// prims algorithm picks the random nodes  and then starts mst from that node alwayd searching for the min cost node visit
// from arbitraty node the minimum sppanning tree is constructed
// 

#include <stdio.h>
#define INF 999

int main()
{
    int adj[10][10],N;
    printf("Enter No. of Nodes: ");
    scanf("%d",&N);
    printf("Enter The Adjacency Matrix:-\n");
    for(int i=0; i<N ; ++i)
    for(int j=0; j<N; ++j){
    scanf("%d",&adj[i][j]);
    if(adj[i][j] == 0)
    adj[i][j] = INF;
    }

    printf("\nMinimum Cost Spanning Tree:-\n");
    printf("\nCost of spanning tree is: %d\n");


 //Pick Arbitrary Node

    int visit[10] = {0};
    visit[0] = 1;

int min;
int min_cost = 0, u = 0, v = 0;
while(1)
{
    min = INF;
    for(int i=0;i<N;++i)
    {
    //If in MST, don't include
        if(!visit[i])
        continue;
        //Select min() of all the reachable remaining nodes
        for(int j=0;j<N;++j)
        {
            if(!visit[j] && adj[i][j] < min)
            {
                min = adj[i][j];
                u = i;
                v = j;
            }
        }
    }
    
    //If new Connection Could Not be Found
    if(min == INF)
    break;

    //If New Connection Found, Add to Visited and Print Connection
    
    visit[v] = 1;
    min_cost += min;
    printf("Edge: (%d -> %d), Cost: %d\n",u+1,v+1,min);

}
printf("minimum cost  : %d",min_cost);

    return 0;
}
