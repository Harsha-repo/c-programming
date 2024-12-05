#include<stdio.h>
#include<limits.h>
int main(){
     int n;
     int array[n];
     int max= INT_MIN;

   
    printf("emter the number");
    scanf("%d",&n);
    
    
    for(int i=0;i<=n;i++){
            scanf("%d",&array[i]);
for(int i=0;i<=n;i++){
    if(max<array[i])
        max=array[i];
        
    
    }
    }
    printf("the mximum element is %d",max);
    return 0;

}