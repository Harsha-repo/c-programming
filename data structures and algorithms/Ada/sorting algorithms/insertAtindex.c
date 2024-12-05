#include<stdio.h>
#include<stdlib.h>

int main(){
    
     int a[]={1,2,3,4,5};
     int size = sizeof(a)/sizeof(a[0]);

     printf("size : %d",size);

     a[size]=10;

     printf("\nsize:%d",a[size]);

     printf("\n%d",a[5]);

    // while(i!=index){
       
    //     int temp=a[i];
    //     a[i]=a[i-1];
    //     a[i-1]=temp;
    //     printf("%d  replaced by %d ",a[i-1],a[i]);
    //     i--;

    //    }

    // for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
    //     printf("%d",a[i]);
    // }
          

    return 0;
}