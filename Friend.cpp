#include <iostream>
using namespace std;

int Num(int a, int b); //User Define Func.. Which Declare Here

class Friend_Fun //Class
{
private:
    int a;
    float b;
    char c[20];

public:
    int get()
    {
        cout << "Enter Profile Info..." << endl;
        cout << "Enter Your Name: ";
        cin >> c;
        cout << "Enter Your Number :";
        cin >> b;
        cout << "Enter Your Age ";
        cin >> a;
        return 0;
    }

    friend int Show(Friend_Fun s); //Decleration of Friend Function
    Text(); // Scope Resolution Function
};

 int Show(Friend_Fun s) // Friend Calling 
{
    cout << "Name Is :" << s.c << endl;
    cout << "Age Is :" << s.a << endl;
    cout << "Number Is :" << s.b << endl;

    return 0;
}
  int Friend_Fun :: Text() // :: Scope Func
 {
    cout << "Abbas"<<endl;

return 0;
}

int main()
{
    int a = 5,b = 5, Sum;

    Friend_Fun s; // Object

    s.get();
    Show(s);
    s.Text();
    Sum = Num(a,b);
    cout<<"Additions "<<Sum<<endl;
    return 0;
}


int Num(int a, int b) //User Define Func..
{
    int Sum;
    Sum = a+b;

return Sum;
}