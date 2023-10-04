#include<stdio.h>
void show(int sum){
    printf("Value of sum= %d\n",sum);
}

int main(){
    int n,i,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);

    for(i=2;i<=n;i+2){
        sum=sum+i;
    }
    show(sum);
}