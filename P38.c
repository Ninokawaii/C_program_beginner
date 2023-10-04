#include<stdio.h>
int main(){
    char text[50];

    printf("Enter text: ");
    gets(text);

    int i=0;
    while(text[i]!='0')
    {
        printf("%c",text[i]);
        i++;
    }
    puts("");
    int j;

    for(j=i;j>=0;j--)
    {
        printf("%c",text[j]);
    }
    puts("");
    printf("lenght of text= %d\n",i);

    return 0;
    
}