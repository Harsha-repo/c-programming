#include<stdio.h>

int main(){

int np,nr;

int allocation[10][10],max[10][10],avail[10],need[10][10];


printf("enter the number of process:");
scanf("%d",&np);
printf("enter the number of resources:");
scanf("%d",&nr);

printf("enter the allocation matrix :\n");
for(int i=0;i<np;i++){
    for(int j=0;j<nr;j++){
        scanf("%d",&allocation[i][j]);
    }
}

printf("enter the max  matrix :\n");
for(int i=0;i<np;i++){
    for(int j=0;j<nr;j++){
        scanf("%d",&max[i][j]);
    }
}

//caluculate the need matrix 
for(int i=0;i<np;i++){
    for(int j=0;j<nr;j++){

        need[i][j]=max[i][j]-allocation[i][j];
    }
}

printf("the need matrix is :\n");

for(int i=0;i<np;i++){
    for(int j=0;j<nr;j++){
        printf("%d  ",need[i][j]);
    }
    printf("\n");
}

printf("enter the avilable matrix :");
    for(int i=0;i<nr;i++){
        scanf(" %d",&avail[i]);
    }

// array ensuring that allprocess are in 0 position 
int f[np], ans[np], ind = 0,k,j,i;
	for (k = 0; k < np; k++) {
		f[k] = 0;
	}
int y = 0;
	for (k = 0; k < 5; k++) {
		for (i = 0; i < np; i++) {
			if (f[i] == 0) {

				int flag = 0;
				for (j = 0; j < nr; j++) {
					if (need[i][j] > avail[j]){
						flag = 1;
						break;
					}
				}

				if (flag == 0) {
					ans[ind++] = i;
					for (y = 0; y < nr; y++)
						avail[y] += allocation[i][y];
					f[i] = 1;
				}
			}
		}
	}

	int flag = 1;
	
	for(int i=0;i<np;i++)
	{
	if(f[i]==0)
	{
		flag=0;
		printf("The following system is not safe");
		break;
	}
	}
	
	if(flag==1)
	{
	printf("Following is the SAFE Sequence\n");
	for (i = 0; i < np ; i++)
		printf(" P%d ->", ans[i]);
	// printf(" P%d", ans[n - 1]);
	}
	

	return (0);

	// This code is contributed by Deep Baldha (CandyZack)




 
  return 0;
  }