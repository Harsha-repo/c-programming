#include<stdio.h>

void main(){

  int nb,nf,f[20],b[20];
  printf("enter the number of blocks :");
  scanf("%d",&nb);
 printf("enter the number of files:");
  scanf("%d",&nf);
  printf("enter the files sizes:");
  for(int i=0;i<nf;i++)
  scanf("%d",&f[i]);

printf("enter the block sizes:");
  for(int i=0;i<nb;i++)
  scanf("%d",&b[i]);

for(int i=0;i<nf;i++){
    for(int j = 0;j<nb;j++){

        if (f[i]<b[j]){
            b[j]=i;
            printf("%d  got allocated at %d ",f[i],j);
            break;
        }
        else{
            printf("%d not got allocated ",f[i]);
            break;
        }
    }
}
}