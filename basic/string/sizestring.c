#include<stdio.h>
#include<string.h>
int main(){
char str[40];
int size=0;
puts("enter a string :");
gets(str);

// size of str 
for(int i=0;str[i]!='\0';i++){

    size ++;
}
puts("the entered string size is:");
printf("%d\n",size);


// reversing the string

for(int i=0,j=size-1; i<=j ; j-- ){

printf("%c",str[j]);
}


return 0;
}


