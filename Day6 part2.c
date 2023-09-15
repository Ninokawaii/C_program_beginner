#include<stdio.h>
int main(){

    float score;

    printf("Enter your score: ");
    scanf("%f",&score);

    if(score <= 100 && score >=90)
    {
        printf("You got grade A ");
    }
    else if(score <=89 && score >=80)
    {
        printf("You got grade B ");
    }
    else if(score <=79 && score >=70)
    {
        printf("You got grade C ");
    }
    else if(score <=69 && score >=60)
    {
        printf("You got grade D ");
    }
    else if(score <=59 && score >=50)
    {
        printf("You got grade E ");
    }
    else if(score <=50 && score >=0)
    {
        printf("You goot grade F\n");
        printf("Sorry to know\n");
        printf("Study hard next time\n");
        printf("keep going forward");
    }

}