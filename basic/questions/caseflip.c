#include<stdio.h>
#include<ctype.h> // this librabry has two functions isupper(), islower()  and toupper() and tolower()we make use of it 
#include<string.h>

int main(){

char *s;
printf("enter a string:");
gets(s);
int length = strlen(s);
for(int i=0;i<length;i++){
    if (islower(s[i]))       
    s[i]=toupper(s[i]);

    else if (isupper(s[i]))
    s[i]=tolower(s[i]);

}

printf("%s",s);




    return 0;
}