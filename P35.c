#include<stdio.h>
void test(){  
    printf("Hello cat\n");
    printf("Hello Cow\n");
    printf("Hello Bruh\n");
}

void text(char* text){
    printf("%s\n",&text);
}

int sum1(){
    int x,y;
    printf("Input x= ");
    scanf("%d",&x);
    printf("Input y= ");
    scanf("%d",&y);
    return x+y;
}

int sum2(int x,int y){
    return x*y;
}

int main(){

    test();
    text("Bruhhhh");

    printf("Sum1= %d\n",sum1());

    int x,y;

    printf("Input x= ");
    scanf("%d",&x);
    printf("Input y= ");
    scanf("%d",&y);
    
    printf("Sum2 = %d\n",sum2(x,y));
}