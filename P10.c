#include<stdio.h>
#include<math.h>
int main(){
    // Exercise 2
    float x;

    printf("Input X: ");
    scanf("%f",&x);

    printf("The result = %f",x+pow(x,2)+pow(x,3)+pow(x,4)+pow(x,5));
}