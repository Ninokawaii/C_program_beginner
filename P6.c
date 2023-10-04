#include<stdio.h>
int main(){

    float math,lec,eng,his,phy;
    float total,avg;

    printf("-----[Score Calculater]-----\n\n");

    printf("Enter your Math score : ");
    scanf("%f",&math);
    printf("Enter your Lecture score : ");
    scanf("%f",&lec);
    printf("Enter your English score : ");
    scanf("%f",&eng);
    printf("Enter your History score : ");
    scanf("%f",&his);
    printf("Enter your Physics score : ");
    scanf("%f",&phy);

    total=math+lec+eng+his+phy;
    avg=(total-10)/5;

    printf("\n\n-----[Monthly Test result]-----\n\n");
    
    printf("Math score : %.1f\nLecture score : %.1f\nEnglish score : %.1f\nHistory score : %.1f\nPhysics score : %.1f\n",math,lec,eng,his,phy);
    printf("Total score : %.1f\n Average : %.2f",total,avg);

    return 0;

}