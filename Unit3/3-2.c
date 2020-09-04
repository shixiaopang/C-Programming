#include<stdio.h>
int main(){
    int i_num;
    float u_price;
    int mm,dd,yyyy;

    printf("Enter item number:");
    scanf("%d",&i_num);
    printf("Enter unit price:");
    scanf("%f",&u_price);
    printf("Enter purchase date (mm/dd/yyyy):");
    scanf("%d/%d/%d",&mm,&dd,&yyyy);
    getchar();

    printf("Item\tUnit\t\tPurchase\n");
    printf("\tPrice\t\tDate\n");
    printf("%d\t$  %.2f\t%d/%d/%d",i_num,u_price,mm,dd,yyyy);
    getchar();
    return 0;
}