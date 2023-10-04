#include<stdio.h>
int main(){

    int number;

    printf("Input Number (1-20) = ");
    scanf("%d",&number);

    if(number==2||number==3||number==5||number==7)
    {
        printf("%d is prime number...!",number);
    }
    else if(number%2==0||number%3==0||number%5==0||number%7==0)
    {
        printf("%d is not prime number...!\n",number);
    }
    else
    {
        printf("%d is prime number...!",number);
    }

    return 0;
}