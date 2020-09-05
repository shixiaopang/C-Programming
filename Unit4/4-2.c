#include<stdio.h>
int main(){
    int enter;
    int n1,n2,n3;
    printf("Enter a three-digit number:");
    scanf("%d",&enter);
    getchar();
    n1=enter%100%10;
    n2=enter%100/10;
    n3=enter/100;
    printf("The reversal is:%d%d%d",n1,n2,n3);
    getchar();
    return 0;
}