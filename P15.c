#include<stdio.h>
int main(){

    char le[20];

    printf("Will your be my girlfriend....?\n");
    printf("Answer [Yes/No]\n");
    printf("Your answer: ");
    scanf("%s",&le);

    if (strcmp(le,"Yes")==0)
    {
        printf("Omg it's like my dream come thought true\3..XD\n");
        printf("Press Enter\n");
        getch();
        printf("I've been falling for me snice we first met...");
        printf("and I never thought this day would be happend..");
    }
    else if (strcmp(le,"No")==0)
    {
        printf("OH...okay :c\n");
        printf("Thank you for coming...");
    }
}