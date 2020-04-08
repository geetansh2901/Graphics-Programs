#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{  clrscr();
   float cx,cy;
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:/turboc3/bgi");
   int x[5],y[5];
   cout<<"Enter the 5 points";
   for(int i=0;i<5;i++)
   {cin>>x[i];
   cin>>y[i];
   circle(x[i],y[i],4);}
   for(float t=0.0;t<=1.0;t+=0.001)
   {
   cx=x[0]*pow((1-t),4)+x[1]*4*t*pow((1-t),3)+x[2]*6*t*t*pow((1-t),2)+x[3]*4*t*t*t*(1-t)+x[4]*t*t*t*t;
   cy=y[0]*pow((1-t),4)+y[1]*4*t*pow((1-t),3)+y[2]*6*t*t*pow((1-t),2)+y[3]*4*t*t*t*(1-t)+y[4]*t*t*t*t;
   putpixel(cx,cy,7);
   }
   getch();
   }