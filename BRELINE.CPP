#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:/turboc3/bgi");
int x1,x2,y1,y2;
cout<<"Enter x coordinate of the start point ";
cin>>x1;
cout<<"Enter y coordinate of the start point ";
cin>>y1;
cout<<"Enter x coordinate of the end point ";
cin>>x2;
cout<<"Enter y coordinate of the end point ";
cin>>y2;
float dx,dy,x,y,p;
dx=x2-x1;
dy=y2-y1;
x=x1;
y=y1;
if(dx==0)
{ cout<<"Slope is infinite";
while(y<y2)
putpixel(x1,y,WHITE);
y=y+1;}
else
if(abs(dx)>=abs(dy))
{cout<<"Slope is "<<dy/dx;
p=2*dy-dx;
while(y<y2)
{
if(p>=0)
{	putpixel(x,y,WHITE);
	y++;
	p+=2*(dx-dy);
}
else
{
	putpixel(x,y,WHITE);
	p+=2*dy;
}
x++;}}
else
{cout<<"Slope is "<<dy/dx;
p=2*dx-dy;
while(y<y2)
{
if(p>=0)
{	putpixel(x,y,WHITE);
	x=x+1;
	p=p+2*dy-2*dx;
}
else
{
	putpixel(x,y,WHITE);
	p=p+2*dx;
}
y++;}}

getch();
}