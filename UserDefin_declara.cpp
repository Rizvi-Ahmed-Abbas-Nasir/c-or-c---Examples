#include<iostream>
using namespace std;

int Abbas(int x, int y);

int main()
{
    int a, b, Answer;
    cout <<"Enter Number To Divide"<<endl;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    Answer = Abbas(a,b);

    cout<<"The Division Is "<<Answer<<endl;

 return 0;   
}

int Abbas(int x, int y)
{
    int Divide;

    Divide = x/y;


return Divide;
}