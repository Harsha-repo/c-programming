#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
char str[50];


int i,j;
printf("enter a string :");
gets(str); // are the builtinfunctions that inputs the pointer to an array 
 //puts(str);

// printing the array using loop
// int size=0;
// for(i=0;str[i]!=0;i++){
//     printf("%c",str[i]);
//     size++;
// }
//  printf("\n");
puts(str);
char temp[50];
strcpy(temp,str);

char str1[20];
printf("%d\n",strlen(str));
strcpy(str1,strrev(str));
puts(str1);
puts(temp);
if (strcmp(str,temp)==0){

    printf("is palindrome");
}

else{
printf("not palindrome");
}

// printf("%d",size);
// printf("\n");

// reversing the string using loop
// for (j = size - 1; j >= 0; j--)
// {
//     printf("%c", str[j]);  
// }
// printf("\n");




     return 0;
 }