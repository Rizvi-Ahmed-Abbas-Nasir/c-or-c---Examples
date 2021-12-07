#include<stdio.h>

int Bubblesort(int arr[], int n)
{
    int i,j,temp;
    int swapped;

    for ( i = 0; i < n - 1; i++)
    {
        swapped = 0;
        for ( j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;

            }
            
        }
        //If No Two Element were Swapped by Inner Loop, then break
        if (swapped == 0)
        {
            break;
        }
        
        
    }
return 0;
}
int printArray(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

return 0;
}

int main()
{

    int arr[] = {35, 45, 656, 53,3 ,35,34};
    int n = sizeof(arr)/sizeof(arr[0]);
    Bubblesort(arr,n);
    printf("Sorted Array: \n");
    printArray(arr,n);
    return 0;

}