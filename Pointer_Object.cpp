//Array Additions with With Two Separate Function With same name
#include<iostream>
using namespace std;

float Adder(float B[]);
int Adder(int A[]);

int main()
{
   int a[10],Int_Sum;
   float b[10],Float_Sum;

cout<<"Enter Array Element To be Add: ";
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
cout<<"Enter Array Element To be Add: ";
    for (int j = 0; j < 5; j++)
    {
        cin>>b[j];
    }


    Int_Sum = Adder(a);
    Float_Sum = Adder(b);
    cout<<Int_Sum<<endl;
    cout<<Float_Sum<<endl;
     
    

return 0;
}

int Adder(int A[10])
{
    int Storage = 0;
    for (int j = 0; j < 5; j++)
    {
        Storage += A[j];
    }

return Storage;
}
float Adder(float B[10])
{
float Storage = 0;
    for (int j = 0; j < 5; j++)
    {
        Storage += B[j];
    }

return Storage;
}



    



