#include<stdio.h>
int main(){
    int n1,n2,n3,n4,n5,n6,n7,n8,n9;
    int n10,n11,n12,n13,n14,n15,n16;
    int r1,r2,r3,r4;
    int c1,c2,c3,c4;
    int d1,d2;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d"
          "%d%d%d%d"
          "%d%d%d%d"
          "%d%d%d%d",
          &n1,&n2,&n3,&n4,
          &n5,&n6,&n7,&n8,
          &n9,&n10,&n11,&n12,
          &n13,&n14,&n15,&n16);
    getchar();
    printf("%2d %2d %2d %2d\n"
           "%2d %2d %2d %2d\n"
           "%2d %2d %2d %2d\n"
           "%2d %2d %2d %2d\n",
           n1,n2,n3,n4,
           n5,n6,n7,n8,
           n9,n10,n11,n12,
           n13,n14,n15,n16);
    r1=n1+n2+n3+n4;
    r2=n5+n6+n7+n8;
    r3=n9+n10+n11+n12;
    r4=n13+n14+n15+n16;
    c1=n1+n5+n9+n13;
    c2=n2+n6+n10+n14;
    c3=n3+n7+n11+n15;
    c4=n4+n8+n12+n16;
    d1=n1+n6+n11+n16;
    d2=n4+n7+n10+n13;
    printf("Row sums:%d %d %d %d\n",r1,r2,r3,r4);
    printf("Column sums:%d %d %d %d\n",c1,c2,c3,c4);
    printf("Diagonal sums:%d %d\n",d1,d2);
    getchar();
    return 0;
}