#include<iostream>
using namespace std;

// int Binary2(int a, int b);
int Binary3(int [],int ,int , int);


class Binary
{

private:

    int Get ,S_array, E_array, NO_Element, Search ,Array[50];
    int i, Ans;
    
public:

    // int Binary_Get()
    // {
    //     cout<<"Enter Number :";
    //     cin>>Get;
    //     cout<<"Enter Number";
    //     cin>>S_array;
    //     // Binary2(Get , S_array);


    // return 0;
    // }  


    // friend int Binary_Search(Binary s);

    Binary2();


};

int main()
{
 Binary s;
 s.Binary2();
 
// Binary_Get();
//  Binary_Search(s);

return 0;
}

// int Binary_Search(Binary s) //  First Possibility 
// {
//   int sum = s.Get + s.S_array;
// cout <<sum <<endl;

// return sum;
// }

// int Binary2(int a, int b) // Second Possibility
// {
//     int sum = a + b;

//     cout<<"Ans"<<sum<<endl;


// return sum;
// }

// int Binary ::Binary2()
// {

// }


int Binary::Binary2()
{

    cout<<"\t\t\t\t\t --> Binary Search Program <--"<<endl;
    cout<<"Enter Size Of An Array: ";
    cin>>NO_Element;

    cout<<"Enter "<<NO_Element<<" Integers "<<endl;

    for ( i = 0; i < NO_Element; i++)
    {
        cin>>Array[i];
    }

    cout<<"Enter Value That You Wanted To Find This Given Array: ";
    cin>>Search;
    
    S_array = 0;
    E_array = NO_Element -1;

    Ans = Binary3(Array, S_array,E_array,Search);
    if (Ans == -1)
    {
        cout<<"Element Not Found In This Array!!"<<endl;
    }
    else{
        cout<<Search<<" Element Found In This Array!! "<<Ans + 1<<endl;
    }
        

    

return 0;
}


int Binary3(int arry[50],int s,int e, int Search)
{
    int mid;
    while (s <= e)
    {
        mid = s + (e - s)/2;
        if (arry[mid] == Search)
        {
            return mid;
        }
        else if (arry[mid] < Search)
        {
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
        
    }
    

return -1;
}

