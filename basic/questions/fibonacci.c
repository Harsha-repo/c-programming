#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the fibonacci");

    scanf("%d", &n);
    int a = 0;
    int b = 1;
    int res = 0;
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", res);
        a = b;
        b = res;
        res = a + b;

}

    return 0;
}