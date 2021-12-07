#include<iostream>
using namespace std;

class Constructor
{
private:
    int x,y;
public:

    Constructor()
    {
    x = 10;
    y = 20;
    
    cout<<"First Constuctor"<<endl;
    cout<<x<<endl;
    cout<<y<<endl;

    }
    Constructor(int a,int b)
    {
        
        x =a;
        y =b;
        cout<<"Second Constuctor"<<endl;
        cout<<x<<endl;
        cout<<y<<endl;

    }
    

   
};

int main()
{
    Constructor s1;
    Constructor s2(20,30);


return 0;
}
