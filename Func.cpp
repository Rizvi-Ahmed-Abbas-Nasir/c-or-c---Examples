#include<iostream>
using namespace std;

class Good
{
private:
    static int Number;
    int Name;

public:
    int Abbas(int a)
    {
        Number = a;
        Number++;
        cout<<"The Value Is "<<Number<<endl;

    return 0;
    }
};

int Good :: Number;

int main()
{
    Good c;

    c.Abbas(100);

return 0;
}
