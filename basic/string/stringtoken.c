#include<stdio.h>
#include<string.h>
int main(){
    char s1[50];
    
    printf("enter the string :");
    gets(s1);
    
char *token = strtok(s1,"-");// it returns the tokens from the string 

while(token!=NULL){

printf("%s",token);
token=strtok(NULL,"-");
}
    return 0;
}
// synatx : strtok(char *str,const char *delims)
// delims isthe string containing the delimiters

// it returns the pointer to the first token to be encountered in the string 
// it retuns null if there are no more tokens available 
// a loop is run over the string to check for the tokens 

// strtok can be used to split the strings with some kind of symbol in the string 
