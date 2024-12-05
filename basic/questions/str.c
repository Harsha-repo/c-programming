#include<stdio.h>
#include<string.h>
void main(){
    int c=0,i=0,j=0,k=0,m=0,f=0;
    char str[20],pat[20],rep[20],ans[20];

    puts("enter the main string :");
    gets(str);
    puts(str);
    puts("enter the pattern:");
    gets(pat);
    puts(pat);
    puts("enter replace string :");
    gets(rep);
 
    while(str[c]!='\0'){      /// str is the main string 
        if(str[i]==pat[j]){
            i++;
            j++;
            
            if(pat[j]=='\0'){     // pattern  .. untill the end of the pattern we need to replace the string with the new string 
                                     // so the iteration of rep!=0 is carried and then ans[m]= rep[k]
                                     // in the ans array we replace the new string till we find the pattern 
                f=1;
                for(k=0;rep[k]!='\0';k++,m++)// rep is replacing string .
                ans[m]=rep[k];
            j=0;
            c=i;
            }
            }
        else{
            ans[m]=str[c];
                m++;
                c++;
                j=0;
                i=c;

            }
        }

        if(f==0)
        printf("pattern not found");
    
        else
            printf("final string is %s",ans);
        printf("\ndone ");
    
    
   
}
