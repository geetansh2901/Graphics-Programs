#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{  clrscr();
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:/turboc3/bgi");
   int x1,x2,y1,y2;
   cout<<"Enter coordinates of the lower left corner of the viewport ";
   cin>>x1>>y1;
   cout<<"Enter coordinates of the lower left corner of the viewport ";
   cin>>x2>>y2;
   line(x1,y1,x2,y1);
   line(x2,y1,x2,y2);
   line(x2,y2,x1,y2);
   line(x1,y1,x1,y2);
   int xl1,yl1,xl2,yl2;
   cout<<"Enter the coordinates of the line ";
   cin>>xl1>>yl1;
   cin>>xl2>>yl2;
   line(xl2,yl2,xl1,yl1);
   getch();

   clrscr();
   line(x1,y1,x2,y1);
   line(x2,y1,x2,y2);
   line(x2,y2,x1,y2);
   line(x1,y1,x1,y2);
   int b11,b12,b13,b14,b21,b22,b23,b24;
   if((yl1-y2)<0)
   b11=0;
   else
   b11=1;
   if((y1-yl1)<0)
   b12=0;
   else
   b12=1;
   if((xl1-x2)<0)
   b13=0;
   else
   b13=1;
   if((x1-xl1)<0)
   b14=0;
   else
   b14=1;
   if((y1-yl2)<0)
   b21=0;
   else
   b21=1;
   if((y1-yl2)<0)
   b22=0;
   else
   b22=1;
   if((xl2-x2)<0)
   b23=0;
   else
   b23=1;
   if((x1-xl2)<0)
   b24=0;
   else
   b24=1;
   if(b11*b21==0&&b12*b22==0&&b13*b23==0&&b14*b24==0)
{  int xc1,yc1,xc2,yc2;
   float m=(yl2-yl1)/(xl2-xl1);
   if(b11==1)
   {yc1=y2;
   xc1=xl1+(yc1-yl1)/m;}
   else
   {xc1=xl1;
   yc1=yl1;}
   if(b12==1)
   {yc1=y1;
   xc1=xl1+(yc1-yl1)/m;}
   else
   {xc1=xl1;
   yc1=yl1;}
   if(b13==1)
   {xc1=x2;
   yc1=yl1+m*(xc1-xl1);}
   else
   {yc1=yl1;
   xc1=xl1;}
   if(b14==1)
   {xc1=x1;
   yc1=yl1+m*(xc1-xl1);}
   else
   {yc1=yl1;
   xc1=xl1;}
   if(b21==1)
   {yc2=y2;
   xc2=xl1+(yc2-yl1)/m;}
   else
   {yc2=yl2;
   xc2=xl2;}
   if(b12==1)
   {yc2=y1;
   xc2=xl1+(yc2-yl1)/m;}
   else
   {yc2=yl2;
   xc2=xl2;}
   if(b23==1)
   {xc2=x2;
   yc2=yl1+m*(xc2-xl1);}
   else
   {yc2=yl2;
   xc2=xl2;}
   if(b24==1)
   {xc2=x1;
   yc2=yl1+m*(xc2-xl1);}
   else
   {yc2=yl2;
   xc2=xl2;}
   line(xc1,yc1,xc2,yc2);}

   getch();
   }