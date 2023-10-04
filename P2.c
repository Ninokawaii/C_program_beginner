#include<stdio.h>
int main(){
    
    // int is give a variable an integer type.
    int x; 
    int y;
    
    //scanf("",&) is use to store the input of the user, which mean u can let the user input variables thmeself.
    printf("Input X = ");
    scanf("%d",&x);
    printf("Input Y =");
    scanf("%d",&y);

    printf("\nX = %d",x);
    printf("\nY = %d\n",y);

    printf("\nsum = %d",x+y);
    printf("\nMulthi = %d",x*y);
    printf("\nDiv = %d",x/y);
    printf("\nSub = %d",x-y);

}