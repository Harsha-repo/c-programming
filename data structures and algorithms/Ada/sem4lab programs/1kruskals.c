#include<stdio.h>
#define inf 999
#define max 100


int p[max],c[max][max];


int find(int v){
    while(p[v])
       v=p[v];
    return v;

}

int main(){

    int n,edge1,edge2,mincost=0,min,u,v;
    printf("enter the no of vertices :");
    scanf("%d",&n);

    printf("input adjacency matrix:");
    for (int i=1;i<=n;i++){
        for (int j =1;j<=n;j++){
            scanf("%d",&c[i][j]);
            if(c[i][j]==0)
                c[i][j]=inf;
            
        }
    }

    for (int i=0;i<n;i++)
        p[i]=0;

    printf("minimum spanning tree :\n");
    while(1){

        min = inf;
        for (int i=1;i<n;++i){
            for (int j=1;j<=n;++j){
                if(c[i][j]<min)
                {
                    u = find(i);
                    v = find(j);

                    if (u!=v)
                    {
                        edge1=i;
                        edge2=j;
                        min = c[i][j];
                    }
                }
            }
        }

            if (min==inf)
             break;

            p[find(edge2)]= find(edge1);
            printf("edge: (%d -> %d), cost: %d \n",edge1,edge2,c[edge1][edge2]);
            mincost += min;
    }

        printf("cost of the minimum spanning tree is :%d",mincost);
    


    return 0;
}