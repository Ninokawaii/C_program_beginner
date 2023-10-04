#include<stdio.h>
int main(){
    float nuse,ouse;
    float total,pay;

    printf("Enter nuse: ");
    scanf("%f",&nuse);
    printf("Enter ouse: ");
    scanf("%f",&ouse);

    total = nuse-ouse;

    printf("Total = %.2f",total);

    if (total >=1 && total <= 10)
    {
        pay = total*350;
    }
    else if ( total >=11 && total <=20)
    {
        pay = 10*350+(total-10)*450;
    }
    else if (total >=21 && total <=30)
    {
       pay = 10*350+10*450+(total-10)*550;
    }
    else if ( total >=31 && total <=40)
    {
        pay = 10*350+10*450+10*550+(total-10)*650;
    }
    else if ( total >= 41 && total <=50 )
    {
        pay = 10*350+10*450+10*550+10*650+(total-10)*750;
    }
    else if ( total >= 51 && total <= 60 )
    {
        pay = 10*350+10*450+10*550+10*650+10*750+(total-10)*850;
    }
    else if ( total >60 )
    {
        pay = 10*350+10*450+10*550+10*650+10*750+10*850+(total-10)*950;
    }
    
    printf("Payment = %.2f",pay);
    
}