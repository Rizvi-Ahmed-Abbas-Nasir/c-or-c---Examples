#include<iostream>
using namespace std;

// int TakeArray(int aa[], int nn);
int PrintArray(int Array[], int Size);
int SelectionSort(int a[], int N);

int main()
{
   int A[50],n;

    cout<<"Enter Size Of An Array: ";
    cin>>n;

    cout<<"Enter "<<n<<" Elements: ";
    for (int i = 0; i <n; i++)
    {
        cin>>A[i];
    }
    cout<<"Unsorted Array: ";
    for (int i = 0; i <n; i++)
    {
        cout<<A[i];
        cout<<" ";
    }
    cout<<endl;
    
    SelectionSort(A,n);
    PrintArray(A,n);


return 0;
}

// int TakeArray(int aa[], int nn)
// {   

//     cout<<"Enter Size Of An Array: ";
//     cin>>nn;

//     cout<<"Enter "<<nn<<" Elements: ";
//     for (int i = 0; i <nn; i++)
//     {
//         cin>>aa[i];
//     }
//     cout<<"Unsorted Array: ";
//     for (int i = 0; i <nn; i++)
//     {
//         cout<<aa[i];
//         cout<<" ";
//     }
//     cout<<endl;
    
// return 0;
// }



int PrintArray(int Array[], int Size)
{
    cout<<"Array: ";
    for (int i = 0; i < Size; i++)
    {
       cout<<Array[i];
        cout<<" ";
    }
    cout<<endl;

return 0;
}

int SelectionSort(int a[], int N)
{   

    for (int i = 0; i <N-1 ; i++)
    {
        int Index_Min = i;
        for (int j = i+1; j < N ; j++)
        {
            if (a[j] < a[Index_Min])
            {
                Index_Min = j;
            }
            

        }
        int temp = a[i];
        a[i] = a[Index_Min];
        a[Index_Min] = temp;
        
    }
    



return 0;
}





