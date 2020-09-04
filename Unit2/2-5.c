#include<stdio.h>
int main(){
    int x,x_1,x_2,x_3,x_4,x_5,ed;
    
    printf("Enter a number:");
    scanf("%d",&x); 

    x_1=x;
    x_2=x*x;
    x_3=x*x*x;
    x_4=x*x*x*x;
    x_5=x*x*x*x*x;
    ed=3*x_5+2*x_4-5*x_3-x_2+7*x_1-6;
    printf("3x^5+2x^4-5x^3-x^2+7x-6=%d",ed);

    getchar();
    return 0;
}