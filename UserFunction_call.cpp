#include<iostream>
using namespace std;

int Func(int x, int y);
int Func2(int J,int I);

int main()
{

    int a,b,j,i;
    a = 6;
    b = 6;

    int result = Func(a,b);
    cout<<"Function: "<<result<<endl;
     

return 0;
}

int Func(int x, int y)
{
int j = 5,i =6;
    int Multiply = x * y;
    int result2 = Func2(j,i);
    cout<<"Function2: "<<result2<<endl;

return Multiply;
}

int Func2(int J,int I)
{

int Sum = J+I;

return Sum;
}