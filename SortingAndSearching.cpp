#include <iostream>
using namespace std;

int GetArray(int arr[], int s);
int PrintBinary(int arr[],int S_Array, int E_Array, int search);

class Array
{
private:
   int search,E_Array, S_Array;

public:

    int Sizeofarray(int Arr[] ,int N); // N Function

    int Sorting(int S_Arr[], int S_N) // Sorting Function
    {
        int i,j,temp;
        int swapped;

        for ( i = 0; i < S_N - 1; i++)
    {
        swapped = 0;
        for ( j = 0; j < S_N-i-1; j++)
        {
            if (S_Arr[j] > S_Arr[j+1])
            {
                temp = S_Arr[j];
                S_Arr[j] = S_Arr[j+1];
                S_Arr[j+1] = temp;
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


    int PrintArray(int arr[], int n,int size)
    {
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
   
    return 0;
    }

    int GetArray(int arr[],int n )
    {
        int Ans;
        cout<<"Enter The Element That you Wanted To Search"<<endl;
        cin>>search;

        S_Array = 0;
        E_Array = n -1;

        Ans = PrintBinary(arr,S_Array,E_Array,search);
    if (Ans == -1)
    {
        cout<<"Element Not Found !!"<<endl;
    }
    else
    {
        cout<<search<<" Element Are Found in "<<Ans + 1<<endl;
    }
    

return 0;
    }

};


// int Array::Sizeofarray(int Arr[], int N )
// {
//    N = sizeof(Arr)/sizeof(Arr[0]);

// return N;
// }

int main()  //Main
{
    
    int array[5],size,n;

    n = sizeof(array)/sizeof(size);

    Array s;

    
    
    GetArray(array,size);
    s.Sorting(array,n);
    cout<<"Sorted Array: "<<endl;
    s.PrintArray(array,n,size);
    s.GetArray(array,n);
    

return 0;
}

int GetArray(int arr[], int s)
{
    int i;
    
    cout<<"Enter Size of Array: ";
    cin>>s;

    cout<<"Enter "<<s<<" Elements"<<endl;

    for ( i = 0; i < s; i++)
    {
        cin>>arr[i];
    }

return 0;
}

int PrintBinary(int arr[],int S_Array, int E_Array, int search)
{
    int mid;
    while (S_Array <= E_Array)
    {
        mid = S_Array + (E_Array - S_Array)/2;
        if (arr[mid] == search)
        {
            return mid;
        }
        else if (arr[mid] < search)
        {
            S_Array = mid + 1;
        }
        else
        {
            E_Array = mid - 1;
        }
        
    }
    


return -1;
}

