#include<stdio.h>
int sum1(){
    int a,b;
    printf("Input A and B\n");
    scanf("%d %d",&a,&b);
    return a+b;
}

int main(){
    printf("sum1 = %d",sum1());
}