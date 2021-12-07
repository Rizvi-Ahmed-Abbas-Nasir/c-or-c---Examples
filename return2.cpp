#include <iostream>


using namespace std;

int area(int x, int y)
{

    int a;

    a = x * y;

    return a;
}

int main()
{

    int width = 5, height = 4;

    int anwser = area(width, height);

    cout << "The Area is " << anwser << endl;
}