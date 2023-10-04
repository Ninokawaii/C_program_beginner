#include<stdio.h>
void mul(int sum){
    printf("----------");
    printf("1./ 1+2+3+...+n= %d\n",sum);
    printf("----------");
}

void mul1(int sum1){
    printf("2./ 2+4+6+...+n= %d\n",sum1);
    printf("----------\n");
}

void mul2(int sum2){
    printf("3./ 3+5+7+...+n= %d\n",sum2);
    printf("----------\n");
}

int main(){

    int n,i,sum =0,sum1=0,sum2=0;

    printf("Input n: ");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        sum = sum + i;
    }
    mul(sum);
    for(i=2;i<=n;i+=2)
    {
        sum1 = sum1 + i;
    }
    mul1(sum1);
    for(i=3;i<=n;i+=2)
    {
        sum2 = sum2 + i;
    }
    mul2(sum2);

    return 0;
}


