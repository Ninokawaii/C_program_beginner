#include<stdio.h>
#define str_size 100
void main(){
    char str[str_size];
    int alp,digit,splch,i;
    alp=digit=splch=i=0;
    
    printf("\nCount total number of alpables, digit and special character: \n");
    printf("--------------------------------------------------------------------");
    printf("Input the string: ");
    fgets(str,sizeof str,stdin);

    while(str[i] !='\0')
    {
        if((str[i]>='a' && str[i<='z'])||(str[i]>='A' && str[i<='Z']))
        {
            alp++;
        }
        else if (str[i>='0'] &&  str[i]<='9')
        {
            digit++;
        }
        else
        {
            splch++;
        }
        i++;
    }
    printf("Number of alphabet in(A-Z,a-z) the string is: %d\n",alp);
    printf("Number of digits in(0-9) the string is: %d\n",digit);
    printf("Number of special character is string is: %d\n",splch);
}