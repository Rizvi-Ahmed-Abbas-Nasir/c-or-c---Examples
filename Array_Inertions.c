#include<stdio.h>

int main()
{
    int Array[10];
    int Number,Positon,i;

   
    printf("\t\t\t\t\tEnter 5 Elements (Number):\n ");
    
    for ( i = 0; i < 5; i++)
    {
       printf("Enter Number: ");
       scanf("%d",&Array[i]);
    }

    printf("\t\t\t\t\tNow Enter Position And Number For Array -->\n\n");

    printf("Enter Position In Array or Index Number:\n ");
    scanf("%d",&Positon);
    printf("Enter Number That You Wanted To Insert:\n ");
    scanf("%d",&Number);
    
    for ( i = 5; i >=Positon; i--)
    {
        Array[i + 1] =Array[i];
    }
    
    Array[i + 1] =Array[i];
    Array[i + 1] = Number;

    
    for ( i = 0; i < 8; i++)
    {
        printf("Index Number is %d and Your Inserted Number %d\n",i,Array[i]);
    }
    


    
return 0;   
}