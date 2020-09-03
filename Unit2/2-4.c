#include<stdio.h>
int main(){
    float amount,tax;

    printf("Enter an amount:$");
    scanf("%f", &amount);

    tax = amount + amount * 0.05;

    printf("With tax added:$%.2f",tax);
    getchar();
    return 0;
}