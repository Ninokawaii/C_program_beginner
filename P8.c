#include<stdio.h>
int main(){

    int num=154234;

    printf("%d",num%10);
    printf("%d",num%100/10);
    printf("%d",num%1000/100);
    printf("%d",num%10);
    printf("%d",num%1000/40);
    printf("%d",num%10/4);

    printf("\n");

    printf("%d",num%1000/40);
    printf("%d",num%10);
    printf("%d",num%10);
    printf("%d",num%100/10);
    printf("%d",num%1000/100);
    printf("%d",num%10/4);

    printf("\n");

    printf("%d",num%10/4);
    printf("%d",num%1000/100);
    printf("%d",num%100/10);
    printf("%d",num%10);
    printf("%d",num%10);
    printf("%d",num%1000/40);

    return 0;

}