#include<iostream>
using namespace std;


class Constuctor_program
{
private:
    int a;
    string b;
    char s; 

public:

    Constuctor_program(int x, string z)
    {
        a = x;
        b = z;
    }
   int display()
   {        

       cout<<a<<b;

    return 0;
   }
};

int main()
{
    
    Constuctor_program s1(18,"abbas");
    s.display();
}
