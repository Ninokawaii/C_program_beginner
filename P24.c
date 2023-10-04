#include<stdio.h>
int main(){

    int total_second;

    printf("total_second = ");
    scanf("%d",&total_second);

    int hour = total_second/3600;
    int minute = (total_second%3600)/60;
    int second = (total_second%3600)%60;
    
    printf("\t%d",hour);
    printf("\t%d",minute);
    printf("\t%d",second);

    return 0;

}