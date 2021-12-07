#include<iostream>
#include<windows.h>
using namespace std;
int main()
{

    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    for(int i = 0; i <= 10; i++ )
    {
        // also specific but in for loop
        SetConsoleTextAttribute(h,i);
        cout<<"Different Color"<<endl;
    }
    //For Specific color only
    SetConsoleTextAttribute(h,FOREGROUND_RED);
    cout<<"RED"<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_GREEN);
    cout<<"GREEN"<<endl;
return 0;
}