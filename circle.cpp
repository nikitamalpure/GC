//Write C++/Java program to draw circle using Bresenham‘s algorithm. Inherit pixel class. 



#include<graphics.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

class pixel  //Base Class
{
   protected: int x1,y1;//center of circle
   public: 
          pixel() //constructor
          {
	    x1=0;y1=0;
          }

          void setoff(int xx,int yy) //set co-ordinates
          {
            x1=xx;
            y1=yy;
          }
};

class dcircle: public pixel // Derived Class
{
     private: int r; //radious of circle
     public:
           
     dcircle():pixel() //constructor
     {
	  r=0;
     }

     void setrad(int z)  //set radious
     {
         r=z;
     }

     
     void drawbc() //Bresenham's Circle
     { 
        int i,x,y;
        float d;

        x=0, y=r;
        d = 3 - 2*r; //decision variable
        
        do
        {
           putpixel(x1+x, y1+y,15);
           putpixel(x1+y, y1+x,15);
           putpixel(x1+y, y1-x,15);
           putpixel(x1+x, y1-y,15);
           putpixel(x1-x, y1-y,15);
           putpixel(x1-y, y1-x,15);
           putpixel(x1-y, y1+x,15);
           putpixel(x1-x, y1+y,15);

           if(d<=0)
           {
              x = x + 1;
              d = d + (4*x) + 6;
           }
           else
           {
              x = x + 1;
              y = y - 1;
              d = d + (4*x-4*y) + 10;
           }

        }while(x<=y);

    }//Function Closed


   
};

int main()
{
	int gd=DETECT,gm=VGAMAX;
	int i, x, y, r,ch, xmax,ymax,xmid,ymid;
	float a,b;
	char ans;
	dcircle c1;
        initgraph(&gd, &gm, NULL);
 	
        xmax = getmaxx();
	ymax = getmaxy();
	xmid = xmax /2;
	ymid = ymax /2;

	line(xmid,0,xmid,ymax); //Y co-ordinate
	line(0,ymid,xmax,ymid); //X co-ordinate
	 	   
	  
	cout<<"\n Enter x: "; cin>>x;
	cout<<"\n Enter y: "; cin>>y;
	cout<<"\n Enter radius: "; cin>>r;
        c1.setoff(xmid+x, ymid-y);
        c1.setrad(r);
        c1.drawbc();
                 

        delay(3000);
	getch();
	closegraph();
	return 0;
}

*************************OUTPUT********************************
gescoe@abc:~$ cd Desktop
gescoe@abc:~/Desktop$ g++ cg2.cpp -o cg2 -lgraph
gescoe@abc:~/Desktop$ ./cg2

 Enter x: [xcb] Unknown sequence number while processing queue
[xcb] Most likely this is a multi-threaded client and XInitThreads has not been called
[xcb] Aborting, sorry about that.
cg2: ../../src/xcb_io.c:274: poll_for_event: Assertion `!xcb_xlib_threads_sequence_lost' failed.
30

 Enter y: 20

 Enter radius: 80
gescoe@abc:~/Desktop$ 
************************************************************************
