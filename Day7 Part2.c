#include<stdio.h>
#include<string.h>
int main(){

    char name[20],pw[20],cpw[20];

    printf("Enter your user name: ");
    scanf("%s",&name);
    printf("Enter your password: ");
    scanf("%s",&pw);
    printf("Confirm your password: ");
    scanf("%s",&cpw);

    if(strcmp(name,"Bruh")==0)
    {
        if(strcmp(pw,"123")==0)
        {
            if(strcmp(cpw,"123")==0)
            {
                printf("Welcome to login...");
            }
            else if (strcmp(cpw,"12ff")<0)
            {
                printf("Your password is incorrent");
            }
        }
        else if (strcmp(pw,"13ff")<0)
        {
            printf("Your password i in corrent");
        }
    }
    else if (strcmp(name,"13ff")<0)
    {
        printf("Your user name is incorrent");
    }
}