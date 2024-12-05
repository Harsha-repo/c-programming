// Develop a Program in C for the following operations on Strings.
// a. Read a main String (STR), a Pattern String (PAT) and a Replace String (REP)
// b. Perform Pattern Matching Operation: Find and Replace all occurrences of PAT 
// in STR with REP if PAT exists in STR. Report suitable messages in case PAT 
// does not exist in STR
// Support the program with functions for each of the above operations. Don't use Built-in
// functions
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
int c=0,i=0,j=0,m=0,f=0;
    char str[20];
    char pat[20];
    char rep[20];
    char ans[20];

    puts("enter the main string :");
    gets(str);
    // printf("enter the main string:");
    // scanf("%s",str);

    puts("enter the pattern string :");
    gets(pat);

    puts("enter the replacing string :");
    gets(rep);

    while(str[c]!='\0'){
        if(str[i]==pat[j]){
            i++;
            j++;

            if(pat[j]=='\0'){
                f=1;
                for(int k=0;rep[k]!='\0';k++,m++)
                ans[m]=rep[k];
            c=i;
            j=0;

            }

        }

        else{
            ans[m]=str[c];
            m++;
            c++;
            i=c;
            j=0;
        }
    }

if(f==0){
    printf("pattern not found");

}
else
{
    printf("%s",ans);
}

}