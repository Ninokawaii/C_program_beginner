#include<stdio.h>
int main(){

    float math,lec,eng,his,phy;
    float total,average;

    printf("Enter your Math's score: ");
    scanf("%f",&math);
    printf("Enter your Lecture's score: ");
    scanf("%f",&lec);
    printf("Enter your English's score: ");
    scanf("%f",&eng);
    printf("Enter your Histroy's score: ");
    scanf("%f",&his);
    printf("Enter your Physic's score: ");
    scanf("%f",&phy);
    
    total = math + lec + eng + his + phy ;
    average= total/5;
    printf("Total: %.2f\nAverage: %.2f\n",total,average);

    if( total <= 350 && total >=300)
    {   
        printf("You got grade A ");
    }
    else if(total <=299 && total >=250)
    {
        printf("You got grade B ");
    }
    else if(total <=249 && total >=200)
    {
        printf("You got grade C ");
    }
    else if(total <=199 && total >=150)
    {
        printf("You got grade D ");
    }
    else if(total <=149 && total >=100)
    {
        printf("You got grade E ");
    }
    else if(total <=99 && total >=0)
    {
        printf("You got grade F\n");
        printf("Sorry to know\n");
        printf("Study hard next time\n");
        printf("keep going forward");
    }

}