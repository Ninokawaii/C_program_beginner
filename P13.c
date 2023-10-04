#include<stdio.h>
int main(){

    int x;
    int y;

    printf("Input x: ");
    scanf("%d",&x);
    printf("Input y: ");
    scanf("%d",&y);

    if(x>y)
    {
        printf("%d is bigger than %d",x,y);
    }
    else 
    {
        printf("%d is bigger than %d",y,x);
    }
}