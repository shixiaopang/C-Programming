#include<stdio.h>
int main(){
    int mount,c_20,c_10,c_5,c_1;

    printf("Enter a dollar amount:");
    scanf("%d",&mount);
    getchar();
    c_20=mount/20;
    c_10=(mount-c_20*20)/10;
    c_5=(mount-c_20*20-c_10*10)/5;
    c_1=(mount-c_20*20-c_10*10-c_5*5)/1;

    printf("$20 bills:%d\n",c_20);
    printf("$10 bills:%d\n",c_10);
    printf(" $5 bills:%d\n",c_5);
    printf(" $1 bills:%d\n",c_1);

    getchar();
    return 0;
}