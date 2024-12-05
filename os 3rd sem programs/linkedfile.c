#include<stdio.h>
#include<stdlib.h>

int main(){

int f[50],no_blocks,block_nos,st_index,len,a;

for(int i=0;i<10;i++){
    f[i]=0;
}

printf("enter how many blocks are already allocated :");
scanf("%d",&no_blocks);

printf("enterthe blocks no.s that are already allocated :");
for(int i=0;i<no_blocks;i++)
{
scanf("%d",&block_nos);
f[block_nos] = 1;
}

X:
printf("enter the starting index block & length");
scanf("%d %d",&st_index,&len);

for(int j=st_index;j<(len+st_index);j++)
{
    if(f[j]==0)
    {
        f[j]=1;
        printf("\n%d->%d",j,f[j]);
    }
    else
    {
        printf("\n%d->file is already allocated",j);
    


    }
}
printf("if you want to enter one more file?yes=1/n=0:");
int c;
scanf("%d",&c);
if(c==1)
goto X;
else
exit(0);
    return 0;
}