#include <graphics.h>
#include <conio.h>

main()
{
   int gd = DETECT, gm;
   int h =10, m = 50, s = 55;
   int left =150,top= 150,right = 450, bottom =450;
   //init graphics
   initgraph(&gd, &gm, "C:/TURBOC3/BGI");

  rectangle (left,top,right,bottom);

    while (1) // this is an infinite loops and anything will repeat  itself to infinity
  {
        s++;
        if (s > 59) 
      {
        m++;
        s = 0;
      }
    if (m > 59) 
    {
       h++;
      m = 0;
    }
    if (h > 12) 
    {
      h=1;
    }
    printf("\n Clock :");
    printf("\t\t\t\t\t\t\n\n %02d:%02d:%02d",h,m,s);//this writes our time in this format 00:00:00
    delay(1000);//thsi functions sleep slows down the while loop and make it more like a real clock
    clrscr();
  }


 
  getch();
  closegraph();
  return 0;

  }