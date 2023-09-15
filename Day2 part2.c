#include<stdio.h>
int main(){
    
    // float is use to store the floating point numbers. 
    // to printf is out we use "%f".
    // and u can load how many "0" u want by "." between "%f" and input the number that u wanna load when it printf out.
    float x;
    float y;

    printf("Input X = ");
    scanf("%f",&x);
    printf("Input Y = ");
    scanf("%f",&y);

    printf("-----[Out put]-----\n");

    printf("\nx = %.2f",x);
    printf("\nY = %.2f",y);

    printf("\n\n-----[Calculate]-----\n\n");

    printf("\nsum = %.2f",x+y);
    printf("\nMulthi = %.2f",x*y);
    printf("\nDiv = %.2f",x/y);
    printf("\nSub = %.2f",x-y);

    return 0;

}