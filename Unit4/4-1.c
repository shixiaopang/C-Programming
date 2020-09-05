#include<stdio.h>
int main(){
    int enter;
    int n1,n2;
    printf("Enter a two-digit number:");
    scanf("%d",&enter);
    getchar();
    n1=enter%10;
    n2=enter/10;
    printf("The reversal is:%d%d",n1,n2);
    getchar();
    return 0;
}