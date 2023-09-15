#include<stdio.h>
int main(){
    
    char ope;
    float n1,n2;

    printf("Input operator (+,-,/,*): ");
    scanf("%c",&ope);
    printf("Input two operand: ");
    scanf("%f %f",&n1,&n2);

    switch(ope)
    {
        case '+':
        printf("%.2f + %.2f = %.2f",n1,n2,n1+n2);
        break;
        case '-':
        printf("%.2f - %.2f = %.2f",n1,n2,n1-n2);
        break;
        case '/':
        printf("%.2f / %.2f = %.2f",n1,n2,n1/n2);
        break;
        case '*':
        printf("%.2f * %.2f = %.2f",n1,n2,n1*n2);
        break;
        default:
        printf("The calculater is error... :c");
        break;
    }
    
    return 0;

}