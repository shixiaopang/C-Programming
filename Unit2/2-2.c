#include<stdio.h>
int main(){
    int radium=10;
    int r_3 = radium*radium*radium;
    float volume,pai;
    pai=3.14;
    volume = 4.0f/3.0f*pai*r_3;
    printf("The ball's volume is %.2f",volume);
    getchar();
    return 0;
}