#include<stdio.h>
int main(){
    // Nested loop
    for(int i=0;i<3;i++)
    {
        printf("i = %d\n",i+1);
        for(int j=0;j<3;j++)
        {
            printf("J = %d\n",j+1);
        }
    }

}