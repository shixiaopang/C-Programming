#include<stdio.h>
int main(){
    int enter;
    int n1,n2,n3;
    printf("Enter a three-digit number:");
    scanf("%d",&enter);
    getchar();
    printf("The reversal is:%d%d%d",enter%100%10,enter%100/10,enter/100);
    getchar();
    return 0;
}