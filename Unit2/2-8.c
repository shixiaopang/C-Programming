#include<stdio.h>
int main(){
    float loan,rate,payment;
    float f_pay,s_pay,t_pay;

    printf("Enter amount of loan:");
    scanf("%f",&loan);
    printf("Enter interest rate:");
    scanf("%f",&rate);
    printf("Enter monthly payment:");
    scanf("%f",&payment);
    getchar();

    f_pay=loan-payment+loan*(rate/100/12);
    s_pay=f_pay-payment+f_pay*(rate/100/12);
    t_pay=s_pay-payment+s_pay*(rate/100/12);
    printf("Balance remaining after first payment:$%.2f\n",f_pay);
    printf("Balance remaining after second payment:$%.2f\n",s_pay);
    printf("Balance remaining after third payment:$%.2f\n",t_pay);

    getchar();
    return 0;
}