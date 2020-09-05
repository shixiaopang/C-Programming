#include<stdio.h>
int main(){
    int n_1,n_2,n_3;
    printf("Enter phone number [(xxx) xxx-xxxx]:");
    scanf("(%d)%d-%d",&n_1,&n_2,&n_3);
    getchar();
    printf("You entered:%d.%d.%d",n_1,n_2,n_3);
    getchar();
    return 0;
}