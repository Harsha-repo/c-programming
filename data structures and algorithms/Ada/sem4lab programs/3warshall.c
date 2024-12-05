//5a
// warshall algorithm  to find the transitive closure 
//Given a directed graph, determine if a vertex j is reachable from another vertex i for all vertex pairs (i, j) in the given graph.
// Here reachable means that there is a path from vertex i to j. The reach-ability matrix is called the transitive closure of a graph.

#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,u,v,k;
printf("N: ");
scanf("%d",&n);
int P[n][n];

printf("Input Adjacency Matrix:-\n");
for(u=0;u<n*n;++u)
scanf("%hd",&P[u/n][u%n]);
 
for(k=0;k<n;++k)
for(u=0;u<n;++u)
for(v=0;v<n;++v)
P[u][v] = (P[u][v] || P[u][k] && P[k][v]);
 printf("\nTransitive Closure:-\n"); 
for(u=0;u<n;++u){
for(v=0;v<n;++v)
printf("%d ",P[u][v]);
printf("\n"); 
 }
 return 0;
}