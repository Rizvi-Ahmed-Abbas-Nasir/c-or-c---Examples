#include<iostream>
#include<string.h>
using namespace std;

class Student
{
private:
    float Marks;    
    char Array_Name[20];
    int Age;
public:
    int Get()
    {
        cout<<"Enter Name : ";
        cin>>Array_Name;
        cout<<"Enter Age : ";
        cin>>Age;
        cout<<"Enter Marks : ";
        cin>>Marks;

    return 0;   
    } 

    int Data();
};

int Student::Data()
{
    cout<<"The Student Name Is "<<Array_Name<<endl;
    cout<<"The Student Age Is "<<Age<<endl;
    cout<<"The Student Marks Is "<<Marks<<endl;


 return 0;   
}

// int Number()
// {
//     int a,b,i;
//     i = 0;
  
   
//     if (a = i)
//     {
//         a++;  
         

//     }
    
  
    
     

// return 0;
// }

int main()
{
    int i,a;
    a = 0 ;


    Student s[3];
   
    for  (i = 0; i < 3; i++)
    {
        a++;
        cout<<"Enter Student Information "<<a<<endl;
        s[i].Get();
        
    }
    
    for ( i = 0; i < 3; i++)
    {
        s[i].Data();
    }
    
return 0;
}


