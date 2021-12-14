#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{
    int x1,y2,x2,y2,xn,yn;
    double r11,r12,r21,r22,th;
    int gd = DETECT , gm;
    cout<<"Enter the Coordinate of Line: "<<endl;
    cout<<"x1,y1,x2,y2";
    cin>>x1,y2,x2,y2;
    initgraph(&gd,&gm,"C\\TURBOC3\\BGI");
    line(x1,y1,x2,y2);
    cout<<"Enter The Angle of Rotation ";
    cin>>th;
    //Theta = (3.17*th)/180
    r11 = cos((th*3.1428)/180);
     r12 = sin((th*3.1428)/180);
      r21 = (-sin((th*3.1428)/180)); 
       r22 = cos((th*3.1428)/180);
    xn = (x2*r11)-(y2*r12);
    yn = (x2*r21)-(y2*r22);
    cout<<"After Rotations Line Is: "<<endl;
    line(x1,y1,xn,yn);
    getch();


}