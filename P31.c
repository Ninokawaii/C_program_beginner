#include<stdio.h>
int main(){

    int i,j,row;

    printf("Enter the number of row ");
    scanf("%d",&row);
    // Print top semi circular shapes of heart
    for( i=row/2;i<=row;i+=2)
    { 
        // print spaces
        for( j=1;j<row-i;j+=2)
        {
            printf(" ");
        }
        // print stars for list semi cricle
        for( j=1;j<=i;j++)
        {
            printf("*");
        }
        // print space
        for( j=1;j<=row-i;j++)
        {
            printf(" "); 
        }
        // print stars for right semi circle
        for( j=1;j<=i;j++)
        {
            printf("*");
        }
        // move to next row
        printf("\n");
    }
    // print inverted start pyramid
    for( i=row;i>=1;i--)
    {
        for(j=i;j<row;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(i*2)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}