#include<stdio.h>
int main(){
int a,d,n,an;
printf("entr the number of terms ");
scanf("%d",&n);
printf("enter the value of differnce ");
scanf("%d",&d);
printf("enter the first digit");
scanf("%d",&a);
for(int i=1;i<=n;i++){
    an=a+(i-1)*d;
    printf("%d  ",an);
}
    return 0;
}