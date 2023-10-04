#include<stdio.h>
void swap1(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("---[In function]---");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
}

void swap2(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
    printf("---[In function]---");
    printf("a= %d\n",*a);
    printf("b= %d\n",*b);
}

int main(){
    int a,b;

    printf("Input a= ");
    scanf("%d",&a);
    printf("Input b= ");
    scanf("%d",&b);

    swap1(a,b);

    printf("---[Out function]---\n");
    printf("A= %d\n",a);
    printf("B= %d\n",b);

    puts("------");

    swap2(&a,&b);

    printf("---[Out function]---\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
}