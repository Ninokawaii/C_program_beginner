#include<stdio.h>
// Declare Variable 
int code[20],qty[20],dis[20];
char name[20];
float price[20],total[20],pay[20];
int i,j,n,op;    
// Declare Function
void input(){
    printf("Input code: ");
    scanf("%d",&code[i]);
    printf("Input name: ");
    scanf("%s",&name[i]);
    printf("Input Quantity: ");
    scanf("%d",qty[i]);
    printf("Input price: ");
    scanf("%f",&price[i]);
}

float findTotal(){
    return total[i]=qty[i]*price[i];
}

int findDis(){
    return dis[i]=(findTotal()<20)?5
                :(findTotal()>=20 && findTotal()<30)?10
                :(findTotal()>=30 && findTotal()<40)?15
                :(findTotal()>=40 && findTotal()<50)?20
                :25;
}

float findPay(){
    return pay[i]=findTotal()-(findTotal()*findDis())/100;
}

void output(){
    printf("\t%d \t%s \t%d \t%.2f$ \t%.2f$ \t%d% \t%.2f$\n",code[i],name[i],qty[i],price[i],findTotal(),findDis(),findPay());
}

void header(){
    puts("\tcode\tName\tQty\tPrice\tTotal\tDiscount\tPayment");
}

int main(){
    input();
    header();
    output();
}