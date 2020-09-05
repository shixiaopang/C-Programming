#include<stdio.h>
int main(){
    int z1,f1,z2,f2;
    int ez,ef;
    printf("Enter two fractions separated by a plus sign:");
    scanf("%d/%d+%d/%d",&z1,&f1,&z2,&f2);
    getchar();
    ez=z1*f2+z2*f1;
    ef=f1*f2;
    printf("The sum is %d/%d",ez,ef);
    getchar();
    return 0;
}