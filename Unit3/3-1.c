#include<stdio.h>
int main(){
    int mm,dd,yyyy;
     
    printf("Enter a date (mm/dd/yyyy):");
    scanf("%d/%d/%d",&mm,&dd,&yyyy);
    getchar();
    printf("You entered the date %d%02d%d",yyyy,mm,dd);
    getchar();
    return 0;
}