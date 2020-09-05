#include<stdio.h>
int main(){
    int enter;
    int n1,n2,n3,n4,n5;
    printf("Enter a number between 0 and 32767:");
    scanf("%d",&enter);
    getchar();
    n5=enter%8;
    n4=enter/8%8;
    n3=enter/8/8%8;
    n2=enter/8/8/8%8;
    n1=enter/8/8/8/8%8;
    printf("In octal, your number is:%d%d%d%d%d",n1,n2,n3,n4,n5);
    getchar();
    return 0;

}