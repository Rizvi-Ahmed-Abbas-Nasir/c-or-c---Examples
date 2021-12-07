#include<iostream>
#include<windows.h>
using namespace std;

int decision();
int firstGetArray();

int Array[100],Size;

class DataStructure
{
private:


public:

    int Insert()
    {
        int pos,value,i;
        cout<<endl;
        cout<<"\t\t\tArrays Elements: ";
        for ( i = 0; i < Size; i++)
        {
            cout<<Array[i];
            cout<<" ";
        }
        cout<<endl;
        cout<<endl;
        cout<<"\t\t\tEnter the position that you wanted to Insert a Value: ";
        cin>>pos;
        cout<<endl;
        cout<<"\t\t\tEnter the value that you wanted to be inserted: ";
        cin>>value;
        cout<<endl;
        for(i = Size; i >= pos; i--)
            i = 2,pos= 3;
            Array[i] = Array[i-1];
            Array[pos-1]=value;
        cout<<"\t\t\tValue Successfully Inserted: ";
        for ( i = 0; i < Size+1; i++)
        {
        cout<<Array[i];
        cout<<" ";
        }
        Size++;
        
    return 0;
    }

    int Delete()
    {
        int i,pos;

        cout<<endl;
        cout<<"\t\t\tArrays Elements: ";
        for ( i = 0; i < Size; i++)
        {
            cout<<Array[i];
            cout<<" ";
        }
        cout<<endl;
        cout<<"\t\t\tEnter the location where you wish to delete element: ";
		cin>>pos;
		if(pos >= Size+1){
	    cout<<"\t\t\tDeletion not possible "<<endl;
        }
        else
        {
        for (i = pos - 1; i < Size - 1; i++)	// 12,13,11,16,18
		Array[i] = Array[i+1];			//pos=2,i=5
 		cout<<"\t\t\tDeleted Array: ";
 		for (i = 0; i < Size - 1; i++)
        {
		cout<<Array[i];
        cout<<" ";
        }
		Size--;
		}

        
    return 0;
    }

    

};

int main()
{
    firstGetArray();
    decision();
return 0;
}

int firstGetArray()
{
    int i,d = 2000;

    cout<<"\t\t\t\t\t\t Data Structure"<<endl<<endl;
    cout<<"\tEnter An Array: "<<endl;
    cout<<"\tEnter The Size of Array: ";
    cin>>Size;
    cout<<"\tEnter " <<Size<< " Elements in Array ";
    for ( i = 0; i < Size; i++)
    {
        cin>>Array[i];
    }
    system("cls");


    cout<<"\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\tIn Process Please Wait"<<endl;;
    Sleep(d);
    system("cls");


return 0;
}

int decision()
{
    int d = 1000,c = 4000;
    int a;
    string n;
    while (1)
    {
    cout<<endl<<endl;
   cout<<"\t\t\t\t\t\tEnter Your Choices: "<<endl;
   cout<<"\t\t\t\t1.Insertion";
Sleep(d); 
   cout<<"\t\t\t\t2.Delection"<<endl<<endl;
Sleep(d);
    cout<<"\t\t\t\t3.Sorting";
Sleep(d); 
   cout<<"\t\t\t\t4.Linear Search"<<endl<<endl;
Sleep(d);
  cout<<"\t\t\t\t5.Binary Search";
Sleep(d); 
   cout<<"\t\t\t\t6.End Program "<<endl<<endl;
   cout<<"\t\t\t\t\t\tEnter Your Options: ";
   cin>>a;

    switch (a)
    {
    case 1:
    DataStructure s;
    s.Insert();
    Sleep(c);
    system("cls");

    break;
    case 2:
    DataStructure c;
    c.Delete();
    
    default:
        break;
    }

    }

return 0;
}

