#include<stdio.h>
int main(){
    char star='*';
    printf("%8c\n",star);
    printf("%7c\n",star);
    printf("%6c\n",star);
    printf("%c   %c\n",star,star);
    printf(" %c %c\n",star,star);
    printf("%3c\n",star);
    getchar();
    return 0;
}