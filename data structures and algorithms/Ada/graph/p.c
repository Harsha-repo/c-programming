
int prims(int adj[][10] , int N){

    int i,j,min=0;
    int min_cost = 0;

    int u,v;

    int visit[10]={0};
    int visit[1]=1;


    while(1){

    min = inf;
for (i=0;i<N;++i){
        if(!visit[i])
        continue;
        for (int i=0;i<N;++i){

            if(visit[i]!=1 && adj[i[j]<min] )
            {
                min  = adj[i][j];
                u = i;
                v = j
            }
        }
    if (min==inf)
    break;

        visit[v]=1;
        mincost+=min;

    printf("%d -> %d  cost : %d",u+1,v+1,min);
    }
    }

    return min cost;
}