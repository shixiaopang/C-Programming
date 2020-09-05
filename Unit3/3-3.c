#include<stdio.h>
int main(){
    int n_1,n_2,n_3,n_4,n_5;
    printf("Enter ISBN:");
    scanf("%d-%d-%d-%d-%d",&n_1,&n_2,&n_3,&n_4,&n_5);
    getchar();
    printf("GS1 prefix:%d\n",n_1);
    printf("Group identifier:%d\n",n_2);
    printf("Publisher code:%d\n",n_3);
    printf("Item number:%d\n",n_4);
    printf("Check digit:%d\n",n_5);
    getchar();
    return 0;
}