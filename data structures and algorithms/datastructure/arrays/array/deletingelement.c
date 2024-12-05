#include<stdio.h>

int main(){
int x,pos,n=10;
int a[n];

for(int i=0;i<n;i++){
    a[i]=i+1;
}
for(int i=0;i<n;i++){
    printf("%d  ",a[i]);
}
printf("\n");

pos = 3;

for(int i= pos-1;i<n-1;++i){
    a[i]=a[i+1];
    printf("%d  ",a[i]);
}

printf("\n");
for(int i=0;i<n-1;i++){
    printf("%d  ",a[i]);
}


}

// the algorithm is that we slect an index which we need to delete 
// then we move that index element to the last index
// while printinf the new array we decrease the size of array and print it 
// hence the required element gets vanished 