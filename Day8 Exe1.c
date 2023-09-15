#include<stdio.h>
int main(){

    char name[20];
    int qty,code;
    float total,price,pay,dis;

    printf("Enter the name of product: ");
    scanf("%s",&name);
    printf("Enter the code: ");
    scanf("%d",&code);
    printf("Enter the price: ");
    scanf("%f",&price);
    printf("Enter the quantity: ");
    scanf("%d",&qty);

    total= price*qty;

    if(total>=1 && total <=19)
    {
        dis = (total*10)/100;
        pay = total-dis;
    }
    else if(total >=20 && total <=29)
    {
        dis = (total*20)/100;
        pay = total-dis;
    }
    else if (total >=30 && total <=39)
    {
        dis = (total*30)/100;
        pay = total-dis;
    }
    else if(total >=40 && total<=49)
    {
        dis = (total*40)/100;
        pay = total-dis;
    }
    else if(total >=50 && total <=59)
    {
        dis = (total*50)/100;
        pay = total-dis;
    }
    else if(total >=60 && total <=69)
    {
        dis = (total*60)/100;
        pay = total-dis;
    }
    else if(total >=70 && total <=79)
    {
        dis = (total*70)/100;
        pay = total-dis;
    }
    else if(total >=71)
    {
        dis = (total*70)/100;
        pay = total-dis;
    }

    printf("Total: %.2f\n",total);
    printf("Discount: %.2f\nPayment: %.2f",dis,pay);
    
}