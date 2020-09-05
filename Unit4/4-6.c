#include<stdio.h>
int main(){
    int n1,n2,n3,n4,n5,n6=0;
    int n7,n8,n9,n10,n11,n12=0;
    int num_1,num_2,num_3,num_4;
    printf("Enter the first 11 digits of a EAN:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12);
    num_1=n2+n4+n6+n8+n10+n12;
    num_2=n1+n3+n5+n7+n9+n11;
    num_3=(num_1*3+num_2-1)%10;
    num_4=9-num_3;
    printf("Check digit:%d",num_4);
    getchar();
    return 0;
}