#include<stdio.h>
// non-return function
// non-parameter
void detail(){

    printf("\nHello cat\n");
    printf("Hello cow\n");
    printf("Hello Bruh\n");
}
// has-parameter
void showMe(const char* text){

    printf("%s",text);
}

int main(){
    char name[20];

    printf("Enter your name: ");
    scanf("%s",&name);
    showMe(name);
    detail();
}