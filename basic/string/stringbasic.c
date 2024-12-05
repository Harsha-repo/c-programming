#include<stdio.h>
int main(){


char str[]="hello";//  size is n+1 because of  the null character
int i=0;
while(str[i]!='\0'){

    printf("%c",*(str+i));
    i++;
}


}
//'\0' is the last term of the string array till there the iterations are carried 