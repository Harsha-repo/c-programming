#include<stdio.h>

void main(){
    int master,s[20];
    char f[20][20][20];
    char d[20][20];
    int i,j;

    printf("enter the number of directories:");
    scanf("%d",&master);

    printf("enter the names of directories:");
    for(int i=0;i<master;i++)
        scanf("%s",d[i]);

    
    printf("enter the size of the directories:");
    for(int i=0;i<master;i++)
    scanf("%d",&s[i]);

    
    printf("enter the file names:");
    for(i=0;i<master;i++){
        for(j=0;j<s[i];j++){
            scanf("%s",&f[i][j]);
        }
    }
    printf("\n");
    printf("directory      size       filenames");

    for(i=0;i<master;i++){

    printf("%s    %d",d[i],s[i]);

    for(j=0;j<s[i];j++)
        printf("%s",f[i][j]);
        printf("\n");
    }
    printf("\n");
    
}