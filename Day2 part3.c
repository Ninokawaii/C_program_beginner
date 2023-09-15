#include<stdio.h>
int main(){

    int id;
    float salary;

    // char is use to store one letter.and we use "%c" to printf it out.
    // and u can store more letter by using [] infornt of ur variable 
    // Also u can set how many number u want user input by set the number inside []. to print it out just use "%f"
    char gender[30];   
    char name[30];

    printf("-----[Information Worker]-----");

    printf("\n\nEnter your name : ");
    scanf("%s",&name);
    printf("Enter your gender : ");
    scanf("%s",&gender);
    printf("Enter your ID : ");
    scanf("%d",&id);
    printf("Enter your salary : ");
    scanf("%f",&salary);

    printf("-----[Worker Information]-----");

    printf("\n\nID = %d",id);
    printf("\nName = %s",name);
    printf("\nGender = %s",gender);
    printf("\nSalary = %.2f",salary);

    return 0;
    

}