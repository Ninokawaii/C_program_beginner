#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,disc,ro1,ro2,rea,ima;

    printf("Enter coefficients a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);

    disc=b*b-4*a*c;

    if (disc>0)
    {
        ro1 = (-b+sqrt(disc))/(2*a);
        ro2 = (-b-sqrt(disc))/(2*a);
        printf("Root1= %.2f and Root2= %.2f",ro1,ro2);
    }
    else if (ro1=ro2)
    {
        ro2=-b/(2*a);
        printf("Root1 = Root2 = %.2f",ro1);
    }
    else
    {
        rea= -b/(2*a);
        ima= sqrt(-disc)/(2*a);
        printf("Root1= %.2f+%.2f and Root2= %.2f-%.2f",rea,ima,rea,ima);

        return 0; 
    }
}