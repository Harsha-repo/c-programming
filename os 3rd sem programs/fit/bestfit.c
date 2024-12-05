#include<stdio.h>
#define max 25

void main(){
    int nb,nf,temp,lowest=10000;
    int b[max],f[max],frag[max],bf[max],ff[max];
    printf("enter the number of blocks:");
    scanf("%d",&nb); 
    printf("enter the number of files:");
    scanf("%d",&nf);

    printf("enter the size of blocks :");
    for(int i=1;i<=nb;i++){
        scanf("%d",&b[i]);
    }

    printf("enter the size of the files:");
    for(int i=1;i<=nf;i++){
        scanf("%d",&f[i]);
    }

    for(int i=1;i<=nf;i++){
        for(int j=1;j<=nb;j++){

            if(bf[j]!=1){
                temp = b[j]-f[i];
                if(temp>0)
                    if(lowest>temp){
                    ff[i]=j;
                    lowest = temp;
                }
            }
        }
        frag[i]=lowest;
        bf[ff[i]]=1;
        lowest=10000;

    }
    printf("file no       file size    block no     block size: fragment\n ");
    for(int i=1;i<=nf;i++)
    printf("%d            %d              %d          %d           %d\n",i,f[i],ff[i],b[ff[i]],frag[i]);

}