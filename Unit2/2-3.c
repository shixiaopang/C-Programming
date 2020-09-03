#include<stdio.h>
int main(){
    float radium;
    float pai;
    pai=3.14;
    printf("Enter the radium:");
    scanf("%f",&radium);
    getchar();
    float r_3 = radium*radium*radium;
    float volume = 4.0f/3.0f*pai*r_3;
    printf("The ball's volume is %.2f",volume);
    getchar();
    return 0;
}