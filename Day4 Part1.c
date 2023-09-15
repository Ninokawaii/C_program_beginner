#include<stdio.h>
int main(){

    char name[20];
    int qty,code;
    float total,pay,price,dis;

    printf("Enter the name of product: ");
    scanf("%s",&name);
    printf("Enter the code: ");
    scanf("%d",&code);
    printf("Enter the price: ");
    scanf("%f",&price);
    printf("Enter the quantity: ");
    scanf("%d",&qty);
    printf("Discount: ");
    scanf("%f",&dis);

    total = price*qty;
    pay = total-dis;

    printf("\n\n-----[Calculater]-----\n\n");
    printf("Product name: %s\nCode: %d\nQuantity: %d\n",name,code,qty);
    printf("Price: %.2f\nTotal:%.2f\nDiscount: %.2f\nPayment: %.2f\n",price,total,dis,pay);


}