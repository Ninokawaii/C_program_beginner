#include<stdio.h>
void summary1(int n){
    int sum1=0;
    for(int i=1;i<=n;i++)
    {
        sum1=sum1+i;
        printf("%d +\b",i);
    }
    printf("\b = %d\n",sum1);
}

void summary2(int n){
    int sum2=0;
    for(int i=1;i<n;i++)
    {
        sum2=sum2+(2*i);
        printf("%d + \b",2*i);
    }
    printf("\b = %d\n",sum2);
}

void summary3(int n){
    int sum3=0;
    for(int i=1;i<=n;i++)
    {
        sum3=sum3+(2*i+1);
        printf("%d + \b",2*i+1);
    }
    printf("\b = %d\n",sum3);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    summary1(n);
    summary2(n);
    summary3(n);
}