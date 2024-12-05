#include<stdio.h>
#include<stdlib.h>
#include<math.h>

    
int main(){

   int req_seq[100],n,totaldistance=0,initial,size,move,i,j;
   printf("enter the number of requests:");
   scanf("%d",&n);

   printf("enter the request sequence:");
   for(int i=0;i<n;i++)
   scanf("%d",&req_seq[i]);
   
   printf("enter the initial haed position:");
   scanf("%d",&initial);

   printf("enter the total disk size:");
   scanf("%d",&size);

   printf("enter the head movement direction for high 1 and for low 0:");
   scanf("%d",&move);
   

   // sort the request array
   for(int i=0;i<n;i++){
    for(int j = 0;j<n-i-1;j++){
        if(req_seq[j]>req_seq[j+1]){
            int temp;
            temp=req_seq[j];
            req_seq[j]=req_seq[j+1];
            req_seq[j+1]=temp;
        }
    }
   }

   int index;
   for(int i=0;i<n;i++){
    if(initial<req_seq[i]){
        index=i;
        break;
    }
   }

// if movement is towards high
   if(move==1)
   {
    
    for(i=index;i<n;i++){
        totaldistance = totaldistance+abs(req_seq[i]-initial);
        initial = req_seq[i];
    }
    totaldistance = totaldistance+abs(size-req_seq[i-1]-1);
    initial=size-1;
    for(int i=index-1;i>=0;i--)
    {
        totaldistance = totaldistance+abs(req_seq[i]-initial);
        initial=req_seq[i];
    }
   }

   // if movement is towards low value
   else{
       for( i=index-1;i>=0;i--)
   {
    totaldistance=totaldistance+abs(req_seq[i]-initial);
    initial=req_seq[i];
   }

   //last movement for min size
   totaldistance=totaldistance+abs(req_seq[i+1]-0);
   initial=0;
   for(int i=index;i<n;i++)
   {
    totaldistance=totaldistance+abs(req_seq[i]-initial);
    initial = req_seq[i];
   }
   }
  printf("total head movement is %d",totaldistance);

    return 0;
}
    



