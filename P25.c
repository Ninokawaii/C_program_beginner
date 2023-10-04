#include<stdio.h>
int main(){
    
    int n;
    int sum=0;
    float sum1;
    
    printf("Input N= ");
    scanf("%d",&n);

    for(int i=1;i<n;i++)
    {
        printf("NUmber of I is = %d\n",i);
        sum1=sum+cos(i);
    }
    printf("Number of sum is =%f\n",sum1);

    return 0;
}