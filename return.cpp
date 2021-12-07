#include<iostream>
using namespace std;

int decision(int a, int b, int c)
{   
    if(a > b && a > c)
    {
        cout<<"The Largest Number Is "<<a<<endl;
    }
    else if (c > a && c > b)
    {
        cout<<"The Largest Number Is "<<c<<endl;
    }
    else
    {
        cout<<"The Largest Is " <<b<<endl;
 
   }

return 0;
}

int main()
{
    int x, y, z;
    cout<<"Enter First Number ";
    cin>>x;
    cout<<"Enter Second Number ";
    cin>>y;
    cout<<"Enter Third Number ";
    cin>>z;

    decision(x,y,z);


return 0;
}