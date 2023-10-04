// Exercise 1
#include<stdio.h>
int main(){

    int id;
    char name[30];
    char gender[5];
    float score;

    system("color 88");

    printf("-----[Information Student]-----\n\n");

    printf("Enter your ID : ");
    scanf("%d",&id);fflush(stdin);
    printf("Enter your name : ");
    scanf("%s",&name);
    printf("Enter your gender : ");
    scanf("%s",&gender);fflush(stdin); // fflush(stdin); is to help your code run even it's error
    printf("Enter your score : ");
    scanf("%f",&score);

    printf("\n\n-----[Student Information]-----\n\n");

    printf("ID : %d\n Name: %s\n Gender: %s\n Score : %.1f",id,name,gender,score);

    return 0;

}