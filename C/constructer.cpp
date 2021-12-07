#include<iostream>
using namespace std;

class constructer
{
private:
   int a;
   int b;
public:
    constructer(int A, int B)
    {
        a =  A;
        b = B;
    }
    int Print()
    {
        cout<<"print:"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        
    return 0;
    }
};

int main()
{
    constructer s1(18, 5);
    s1.Print();



    return 0;
}
