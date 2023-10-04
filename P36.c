#include<stdio.h>
void show(int count){
    printf("Hello cat %d\n",count);
}

int main(){
    int i;

    for(i=0;i<10;i++)
    {
        show(i+1);
    }
}