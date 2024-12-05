//5 b
#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
  
    printf("enter the number of vertices:");
    scanf("%d",&n);
    
      int adj[n][n];

    printf("enter the adj matrix :");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&adj[i][j]);
        }
    }


    
    int i,j,k=0;
    for (k = 0; k < n; k++) {
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        if ( adj[i][j] > adj[i][k] + adj[k][j] )
          adj[i][j] = adj[i][k] + adj[k][j];
      }
    }
  }

  printf("the solution matrix");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf(" %d",adj[i][j]);
        }
        printf("\n");
    }

    return 0;
}
