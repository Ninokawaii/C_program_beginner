#include<stdio.h>
int main(){
    int array[20];
    int i,n,j,op;
    int check =0;
    int value;
    do
    {
        printf("1. Input\n");
        printf("2. Output\n");
        printf("3. Search\n");
        printf("4. Update\n");
        printf("5. Detele\n");
        printf("6. Insert\n");
        printf("7. Sort\n");
        printf("8. Add\n");
        printf("9. Clear\n");
        printf("10. Exit\n");
        printf("Please choose option: ");
        scanf("%d",&op);
        switch(op){
            case 1:{
                printf("Enter sizeof array= ");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                    printf("Input element of array[%d]: ",i);
                    scanf("%d",&array[i]);
                }
            }
            break;
            case 2:{
                for(i=0;i<n;i++)
                {
                    printf("Element of array[%d]= %d\n",i,array[i]);
                }
            }
            break;
            case 3:{
                printf("Input value for search: ");
                scanf("%d",&value);
                for(i=0;i<n;i++)
                {
                    if(value ==array[i])
                    {
                        printf("Element of array[%d]= %d\n",i,array[i]);
                        check=1;
                    }
                }
                printf(check==0?"Search not found\n":"searrch found\n");
            }
            break;
            case 4:{ 
                printf("Input value for upate: ");
                scanf("%d",&value);

                for(i=0;i<0;i++)
                {
                    if(value=array[i])
                    {
                        printf("Input new elemnet of array[%d]: ",i);
                        scanf("%d",array[i]);
                        check =1;
                    }
                }
                printf(check==0?"Search not found\n":"Upate success\n");
            }
            break;
            case 5:{
                printf("Input value for delete: ");
                scanf("%d",&value);

                for(i=0;i<n;i++)
                {
                    if(value==array[i])
                    {
                        for(j=i;j<n;i++)
                        {
                            array[j]=array[j+1];
                        }
                        n--;
                        check=1;
                    }
                }
                printf(check==8?"Search not found\n":"Detele sucsess\n");
            }
            break;
            case 6:{
                printf("Input value for insert: ");
                scanf("%d",&value);

                for(i=0;i<n;i++)
                {
                    if(value==array[i])
                    {
                        for(j=n;j>=i;j--)
                        {
                            array[j]=array[j-1];      
                        }
                        n++;
                        printf("Input new element of array[%d]: ",i);
                        scanf("%d",&array[i]);
                        check=1;
                        break;
                    }
                }
                printf(check==8?"Search not found\n":"Insert success\n");
            }
            break;
            case 7:{
                int temp;
                for(i=0;i<n;i++)
                {
                    for(j=i+1;j<n;j++)
                    {
                        if(array[i]<array[i])
                        {
                            temp = array[i];
                            array[1]=array[j];
                            array[j]=temp;
                        }
                    }
                }
            }
            break;
            case 8:{
                int add;
                printf("Enter new size of array: ");
                scanf("%d",&add);
                for(i=n;i<n+add;i++)
                {
                    printf("Enter new elemnet of array[%d]: ",i);
                    scanf("%d",&array[i]);
                    check = 1;
                }
                if (check==0)
                {
                    puts("Can not add");
                }
                else
                {
                    printf("New element is add success\n");
                    n+=add;
                }
            }
            break;
            case 9:{
                n=0;
                system("clear");
            }
            break;
            case 10:{
                n=0;
                system("start https://www.youtube.com/watch?v=YKuHdOxj46I&list=RDYKuHdOxj46I&start_radio=1");
            }
            default:{
                printf("Please choose option again....!\n");
            }
            break;
        }
    }
    while(op!=10);
}