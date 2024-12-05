#include<stdio.h>

int main(){

    int a[]={12,35,1,10,34,1};

    int size = sizeof(a)/sizeof(a[0]);

    int l=-1;
    int sl=-1;

    if (size <2){
        printf("no other element to compare");

    }

    else{
        
        for(int i=0;i<size;i++){
            if (a[i]>l){
                l=a[i];
                
            }
            if (a[i]<l && a[i]>sl){
                sl=a[i];
                
            }
        }
            
        // for(int i=0;i<size;i++){
            
        //     if (a[i]<l && a[i]>sl){
        //         sl=a[i];
                
        //     }
        //  }

        }
    
    

    printf("%d",sl);
 
    return 0;
}