#include<iostream>
#define n 5
using namespace std;

int Enqueue(int x);
int Dequeue();
int Dispaly();

int Queue[n];
int rear = -1;
int front = -1;

int main()
{ 
    cout<<"Quque: "<<endl;
    Enqueue();
    Dequeue();
    Dispaly();


return 0;
}

int Enqueue(int x)
{
    if (rear == n-1) // Queue is full
    {
        cout<<"Queue is Full"<<endl;
    }
    else if(front == -1 && rear == -1) // Queue is Empty
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        rear++;
        Queue[rear];
    }

return 0;
}

int Dequeue()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else if(rear == front)
    {
        int item = Queue[front];
        front = rear = -1;
        cout<<"Deleted Element "<<item<<endl;
    }
    else
    {
        int item = Queue[front];
        front++;
        cout<<"Delected Item: "<<item<<endl;
    }



return 0;
}

int Display()
{   
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        for (int i = front; i < rear; i++)
        {
            cout<<Queue[i];
            cout<<" ";
        }
        
    }


return 0;
}