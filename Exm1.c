#include<stdio.h>

int main()
{
    int A[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("Enter The Number :");
        scanf("%d",&A[i]);

    }

    for ( i = 0; i < 5; i++)
    {
       printf("Display The Number %d: %d\n",i ,A[i]);
    }
    




return 0;
}