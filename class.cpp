#include<iostream>
#include<string>
using namespace std;


class Abbas
{
private:
        string Name;
        int Age;
        char Blood_g;

public:
    
    int Accept();
    int Display();
    int Show()
    {
        cout<<"My Name Is Abbas Rizvi"<<endl<<endl;

    return 0;
    }
};

int Abbas::Accept()
{
    cout<<"Enter Your Name ";
    cin>>Name;
    cout<<"Enter Your Age ";
    cin>>Age;
    cout<<"Enter Your Blood Group ";
    cin>>Blood_g;
return 0;
}

int Abbas::Display()
{

        cout<<"Name is "<<Name<<endl;
        cout<<"Name is "<<Age<<endl;
        cout<<"Name is "<<Blood_g<<endl;

return 0;
}

int Another()
{
    cout<<"Im Am A Coder"<<endl;

return 0;
}

int main()
{
 Abbas A;
 A.Accept();
 A.Display();
 A.Show();
 Another();
return 0;
}

