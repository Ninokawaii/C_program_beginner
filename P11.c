#include<stdio.h>
#include<math.h>
int main(){
    // Exercise 3
    float x,y,tot;

    printf("Input x: ");
    scanf("%f",&x);
    printf("Input y: ");
    scanf("%f",&y);

    tot=2*x/3*y+pow(x,2)/pow(x,2);
    printf("The Total = %.2f",tot);
    
}