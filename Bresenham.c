#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT,gm=DETECT,length,dx,dy,x1,y1,x2,y2,e;
float x,y;
clrscr();
printf("\n enter coordinates of x1,y1,x2,y2");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
dx=x2-x1;
dy=y2-y1;
e=2*(dy-dx);
x=x1;
y=y1;
initgraph(&gd,&gm,"c://Turboc3//BGI");
while(x<=x2)
{
if(e<0)
{
x=x+1;
y=y;
e=e+2*dy;
}
else
{
x=x+1;
y=y+1;
e=e+2*(dy-dx);
}
putpixel(x,y,15);
}
getch();
closegraph();
}
