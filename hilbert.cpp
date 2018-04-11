/***********************************************************
//Write C++/Java program to generate Hilbert curve using concept 
of fractals. 
 Roll No:
 Batch:
 **********************************************************/
 
#include<iostream>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

void move(int j, int h, int &x,int &y)
{
	cout<<"\nJ="<<j<<" 	";
	if(j==1)
		y-=h;
	else
		if(j==2)
			x+=h;
		else if(j==3)
			y+=h;
		else if(j==4)
	x-=h;
	cout<<"x="<<x<<" And y="<<y<<endl;
	lineto(x,y);
}

void hilbert(int r,int d,int l ,int u,int i,int h,int &x,int &y)
{
	if(i>0)
	{
		i--;
		hilbert(d,r,u,l,i,h,x,y);
		move(r,h,x,y);
		hilbert(r,d,l,u,i,h,x,y);
		move(d,h,x,y);
		hilbert(r,d,l,u,i,h,x,y);
		move(l,h,x,y);
		hilbert(u,l,d,r,i,h,x,y);
	}
}


int main()
{
	int n,x1,y1;
	int x0=50,y0=150,x,y,h=10,r=2,d=3,l=4,u=1;
	cout<<"Give the value of n";
	cin>>n;
	x=x0;
	y=y0;
	int driver=DETECT,mode=0;
	initgraph(&driver,&mode,NULL);
	moveto(x,y);
	hilbert(r,d,l,u,n,h,x,y);
	delay(10000);
	closegraph();
	return 0;
}

/***********************************OUTPUT***********************
gescoe@uchita:~$ cd Desktop
gescoe@uchita:~/Desktop$ g++ ak.cpp -o ak -lgraph
gescoe@uchita:~/Desktop$ ./ak
Give the value of n 2

J=3 	x=50 And y=160

J=2 	x=60 And y=160

J=1 	x=60 And y=150

J=2 	x=70 And y=150

J=2 	x=80 And y=150

J=3 	x=80 And y=160

J=4 	x=70 And y=160

J=3 	x=70 And y=170

J=2 	x=80 And y=170

J=3 	x=80 And y=180

J=4 	x=70 And y=180

J=4 	x=60 And y=180

J=1 	x=60 And y=170

J=4 	x=50 And y=170

J=3 	x=50 And y=180
**************************************************************/

