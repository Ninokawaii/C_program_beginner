#include<stdio.h>
#include<math.h>
int main(){
    // Exercise
    float x,y,sum;

    printf("Input X: ");
    scanf("%f",&x);
    printf("Input y: ");
    scanf("%f",&y);

    sum = sqrt(3*x)+sqrt(2*y);
    printf("The sum = %.2f",sum);
    
}