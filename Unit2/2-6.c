#include <stdio.h>
int main(){
    int x,ed;

    printf("Enter a number:");
    scanf("%d",&x);
    getchar();

    ed = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    printf("((((3*x+2)*x-5)*x-1)*x+7)*x-6=%d",ed);
    getchar();
    return 0;
}