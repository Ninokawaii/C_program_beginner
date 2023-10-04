#include<stdio.h>
// return-function
long sum(int x,int y){
    printf("x + y = %d\n",x+y);
    return x+y;
}

int main(){
    int a=5;
    int total;
    
    total = a + sum(4,6);
    printf("total = %d",total);
}