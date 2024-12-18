// #include<stdio.h>
// #include<stdlib.h>

// int choice ,n,start;
//     int adj[20][20];
//     int visit[20];
//     int top=-1,front=-1,rear=-1;
//     int stack[20],queue[20];

// void bfs(int v){
//     int cur;
//     visit[v]=1;
//     queue[++rear]=v;
//     while(front!=rear){

//         cur=queue[++front];

//         for(int i=0;i<n;i++){
//             if((adj[v][i]==1 ) && (visit[i]==0)){

//                 queue[++rear]=i;
//                 visit[i]=1;
//                 printf("%d",i);

//             }
//         }
//     }
// }

// void dfs(int v){
//     visit[v]=1;
//     stack[++top]=v;
//     for(int i=0;i<n;i++){
//         if(adj[v][i]=1&& visit[i]==0){
//         printf("%d",i);
//         dfs(i);
//     }
//     }
// }


// int main(){


//     printf("enter the number of vertices:");
//     scanf("%d",&n);

//     printf("enter the adjacency matrix");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&adj[i][j]);
//         }
//     }

//     for(int i=0;i<n;i++){
//         visit[i]=0;
//     }

//     printf("enter the start value:");
//     scanf("%d",&start);

//     printf("\n1.bfs   2.dfs  3.display  4.exit");
//     printf("\nenter your choice:");
//     scanf("%d",&choice);
    
//     switch(choice){
//         case 1:

//         bfs(start);
//         for(int i=0;i<n;i++){

//             if(visit[i]==0){
//                 printf("the nodes that are not reachable are %d:,",i);
//             }
//         }

//         break;

//         case 2:
//         dfs(start);
//         break;


//         case 3:
//         exit(0);
//         break;
//     }




// }
#include<stdio.h>
#include<stdlib.h>

int a[50][50], n, visited[50];
int q[20], front = -1,rear = -1;
int s[20], top = -1, count= 0;

void bfs(int v)
{
         int cur;
         visited[v] = 1;
         q[++rear] = v;                 // using queue in bfs 
         while(front!=rear)
        {
                cur = q[++front];
                for(int i=1;i<n;i++)
               {
                        if((a[cur][i]==1)&&(visited[i]==0))
                       {
                                 q[++rear] = i;
                                  visited[i] = 1;
                                  printf("%d ", i);
                        }
               }
        }
}

void dfs(int v)
{
         
         visited[v]=1;
         s[++top] = v;                // usingg stack in dfs 
         for(int i=1;i<=n;i++)
        {
                 if(a[v][i] == 1&& visited[i] == 0 )
                 {
                           printf("%d ", i);
                           dfs(i);
                  }
         }
}

int main()
{

         int ch, start, i,j;
         printf("\nEnter the number of vertices in graph:  ");
         scanf("%d",&n);
         printf("\nEnter the adjacency matrix:\n");
         for(i=1; i<=n; i++)
         {
                for(j=1;j<=n;j++)
                        scanf("%d",&a[i][j]);
          }

    for(i=1;i<=n;i++)             // making  the visited array as 0 initialization
           visited[i]=0;
    printf("\nEnter the starting vertex: ");
    scanf("%d",&start);

        printf("\n==>1. BFS: Print all nodes reachable from a given starting node");
        printf("\n==>2. DFS: Print all nodes reachable from a given starting node");
        printf("\n==>3:Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: printf("\nNodes reachable from starting vertex %d are: ", start); 
                    bfs(start);
                    for(i=1;i<=n;i++)
                    {                                     // if visited is equal to zero then those are the nodes which are not visited
                        if(visited[i]==0)
                            printf("\nThe vertex that is not reachable is %d" ,i);
                    }
                    break;


            case 2: printf("\nNodes reachable from starting vertex %d are:\n",start);
                    dfs(start);
                    break;
           case 3: exit(0);
           default: printf("\nPlease enter valid choice:");
           }
}
