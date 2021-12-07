#include<iostream>
using namespace std;

class Abbas
{
private:
        string Name;
        int Age;
        char Blood_g;

public:
        int recive()
        {
            cout<<"Enter Name ";
            cin>>Name;
            cout<<"Enter Age ";
            cin>>Age;
            cout<<"Enter Blood_g ";
            cin>>Blood_g;

        return 0;
        }

        int display()
        {
            cout<<"Your Name Is "<<Name<<endl;
            cout<<"Your Age Is "<<Age<<endl;
            cout<<"your Blood Group Is "<<Blood_g<<endl;
        return 0;   
        }
};
int main ()
{
Abbas s;
s.recive();
s.display();


return 0;   
}