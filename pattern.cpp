/*
PROBLEM STATEMENT: Write C++/Java program to draw the following pattern using any Line drawing algorithms.

*/
#include<graphics.h>
#include<iostream>
using namespace std;

class pt //base class
{
   protected: int xco,yco,color;
   public:
          pt()
          {
            xco=0;yco=0;color=15;
          }

          void setco(int x,int y)
          {
            xco=x;
            yco=y;
          }

          void setcolor(int c)
          {
            color=c;
          }

          void draw()
          {
            putpixel(xco,yco,color);
          }

};

class dline: public pt //derived class
{
    private: int x2,y2;
    public:
           dline():pt()
           {
             x2=0,y2=0;
           }

           void setline(int x, int y, int xx, int yy)
           {
             pt::setco(x,y);
             x2=xx;
             y2=yy;
           }

           void drawl() //Bresenham's Line
           {
             float x,y,dx,dy,e,temp;
             int i,s1,s2,ex;
             int xmax,xmid,ymax,ymid;
             xmax = getmaxx();
             ymax = getmaxy();
             xmid = xmax /2;
             ymid = ymax /2;

             //Step2
             dx=abs(x2-xco);
             dy=abs(y2-yco);

             //Step3
             x=xco;
             y=yco;
             pt::setco(x,y);
             pt::draw();

             //Step4.....sign() function
             if(x2 > xco)
             {
                s1=1;
             }
             if(x2 < xco)
             {
                s1=-1;
             }
             if(x2 == xco)
             {
                s1=0;
             }

              
             if(y2 > yco)
             {
                s2=1;
             }
             if(y2 < yco)
             {
                s2=-1;
             }
             if(y2 == yco)
             {
                s2=0;
             }
             
             //Step5
             if(dy > dx)
             {
                temp = dx;
                dx = dy;
                dy = temp;

                ex = 1;
             }
             else
             {
                ex=0;
             }

             //Step6
             e=2*dy-dx; //decision variable
             cout<<"\t"<<1;
             cout<<"\t"<<e;
             cout<<"\t"<<x-xmid;
             cout<<"\t"<<ymid-y<<endl;
            
             //Step7
             i=1;
             do
             {
                  while(e>=0)
                  {
                     if(ex==1)
                     {
                        x = x + s1;
                     }
                     else
                     {
                        y = y + s2;
                     }
                     e = e - 2*dx;
                  }
                  if(ex==1)
                  {
                     y = y + s2;
                  }
                  else
                  {
                     x = x + s1;
                  }
     
                  e = e + 2*dy;
                  //cout<<"\tdy==="<<dy<<"And e===<<"<<e;
                  pt::setco(x,y);
                  pt::draw();
                  i = i + 1;
                  cout<<"\t"<<i;
                  cout<<"\t"<<e;
                  cout<<"\t"<<x-xmid;
                  cout<<"\t"<<ymid-y<<endl;
                  
           }while(i<=dx);

      }//funciton closed

	void cal(int x1,int y1,int x3,int y3)
	{
		int xl1,xl2,xl3,xl4,yl1,yl2,yl3,yl4;
		xl1=x1;
		yl1=y1;
		
		xl3=x3;
		yl3=y3;
	
		yl2=yl1;
		xl2=xl3;
		
		yl4=yl3;
		xl4=xl1;

		setline(xl1,yl1,xl2,yl2);
		drawl();
		setline(xl2,yl2,xl3,yl3);
		drawl();
		setline(xl3,yl3,xl4,yl4);
		drawl();
		setline(xl4,yl4,xl1,yl1);
		drawl();

		//rectangle 2
		
		int x5,x6,x7,x8,y5,y6,y7,y8;
		
		x5=xl4;
		y5=(yl1+yl4)/2;
	
		x6=xl3;
		y6=y5;
		
		x7=(xl1+xl2)/2;
		y7=yl2;
		
		x8=x7;
		y8=yl3;
		
		setline(x5,y5,x7,y7);
		drawl();
		setline(x7,y7,x6,y6);
		drawl();
		setline(x6,y6,x8,y8);
		drawl();
		setline(x8,y8,x5,y5);
		drawl();
		

		///rectangle 3
		int x9,x12,x10,x11,y9,y10,y11,y12;
		
		x9=(x5+x7)/2;
		y9=(y5+y7)/2;
	
		x10=x9;
		y10=(y5+y8)/2;
		
		x11=(x6+x7)/2;
		y11=y9;
		
		x12=x11;
		y12=y10;
		
		setline(x9,y9,x11,y11);
		drawl();
		setline(x11,y11,x12,y12);
		drawl();
		setline(x12,y12,x10,y10);
		drawl();
		setline(x10,y10,x9,y9);
		drawl();
		
			
	}
      	
      
};

int main()
{
    	int gd=DETECT,gm=VGAMAX;
    	int x1,y1,x3,y3, xmax,ymax,xmid,ymid;
   	 char a;
    	initgraph(&gd,&gm,NULL);
    	pt p;
    	dline dda;

    	xmax = getmaxx();
    	ymax = getmaxy();
    	xmid = xmax /2;
    	ymid = ymax /2;

    	line(xmid,0,xmid,ymax); //Y-Axis
    	line(0,ymid,xmax,ymid); //X-Axis
        
                 cout<<"\nEnter the co-ordinates of the endpoints of line Below\n";
                 cout<<"\nEnter x1: "; cin>>x1;
                 cout<<"\nEnter y1: "; cin>>y1;
                 cout<<"\nEnter x3: "; cin>>x3;
                 cout<<"\nEnter y3: "; cin>>y3;

		dda.cal(x1+xmid,ymid-y1,x3+xmid,ymid-y3);

        

   delay(50000);
   closegraph();
   return 0;
/*
ASSIGNMENT NO:5
Roll_No:71
Batch_NO:4
TITLE:Write C++/Java program to draw the following pattern using any Line drawing algorithms.
*/
#include<graphics.h>
#include<iostream>
using namespace std;

class pt
{
	protected :
		int xco,yco,color;
		public:
			pt()
			{
				xco=0;
				yco=0;
				color=15;
			}
		void setco(int x,int y)
		{
			xco=x;
			yco=y;
		}
		void setcolor(int c)
		{
			color=c;
		}
		void draw()
		{
			putpixel(xco,yco,color);
				
		}
};
class dline : public pt
{
	private :
		int x2,y2;
	public:
		dline():pt()
		{
			x2=0;
			y2=0;
		}
		void setline(int x,int y,int xx,int yy)
		{
			pt::setco(x,y);
			x2=xx;
			y2=yy;
		}
		void draw(int colour)
		{
			float x,y,dx,dy,length;
			int i;
			pt::setcolor(colour);
			dx=abs(x2-xco);
			dy=abs(y2-yco);
			if(dx>=dy)
				length=dx;
			else
				length=dy;
			dx=(x2-xco)/length;
			dy=(y2-yco)/length;
			x=xco;
			y=yco;
			i=1;
			while(i<=length)
			{
				pt::setco(x,y);
				pt::draw();
				x=x+dx;
				y=y+dy;
				i=i+1;
			}
			pt::setco(x,y);
			pt::draw();
		}
};
void drawfig(int ax,int ay,int bx,int by,int cx,int cy,int dx,int dy,int n)
{
	int m1x,m1y,m2x,m2y,m3x,m3y,m4x,m4y;
	dline l1;
	l1.setline(ax,ay,bx,by);
	l1.draw(15);
		
	l1.setline(bx,by,cx,cy);
	l1.draw(15);
	
	l1.setline(cx,cy,dx,dy);
	l1.draw(15);

	l1.setline(dx,dy,ax,ay);
	l1.draw(15);

	
	m1x=(ax+bx)/2;
	m1y=(ay+by)/2;
	m2x=(bx+cx)/2;
	m2y=(by+cy)/2;
	m3x=(cx+dx)/2;
	m3y=(cy+dy)/2;
	m4x=(dx+ax)/2;
	m4y=(dy+ay)/2;

	n--;
	if(n!=0)
		drawfig(m1x,m1y,m2x,m2y,m3x,m3y,m4x,m4y,n)  ;
}
int main()
{
	int gd=DETECT,gm=VGAMAX;
	int x1,x2,y1,y2;
	pt p1;

	dline l;
	cout<<"\nEnter two end points of line";
	cout<<"\nEnter the value of Left Bottom x1::";
	cin>>x1;
	cout<<"\nEnter the value of Left Bottom y1::";
	cin>>y1;
	cout<<"\nEnter the value of Right Top x2::";
	cin>>x2;
	cout<<"\nEnter the value of Right Top y2::";
	cin>>y2;
	initgraph(&gd,&gm,NULL);
	
	drawfig(x1,y1,x1,y2,x2,y2,x2,y1,3);
	
	getch();
	closegraph();
	return 0;
}
/*OUTPUT
linux16@ubuntu16:~/roll70$ g++ ass5.cpp -lgraph
linux16@ubuntu16:~/roll70$ ./a.out

Enter two end points of line
Enter the value of Left Bottom x1::90

Enter the value of Left Bottom y1::100

Enter the value of Right Top x2::150

Enter the value of Right Top y2::200
*/

}

/*OUTPUT

Enter the co-ordinates of the endpoints of line Below

Enter x1: 100

Enter y1: 50

Enter x3: 30

Enter y3: 10
	1	-70	100	50
	2	-70	99	50
	3	-70	98	50
	4	-70	97	50
	5	-70	96	50
	6	-70	95	50
	7	-70	94	50
	8	-70	93	50
	9	-70	92	50
	10	-70	91	50
	11	-70	90	50
	12	-70	89	50
	13	-70	88	50
	14	-70	87	50
	15	-70	86	50
	16	-70	85	50
	17	-70	84	50
	18	-70	83	50
	19	-70	82	50
	20	-70	81	50
	21	-70	80	50
	22	-70	79	50
	23	-70	78	50
	24	-70	77	50
	25	-70	76	50
	26	-70	75	50
	27	-70	74	50
	28	-70	73	50
	29	-70	72	50
	30	-70	71	50
	31	-70	70	50
	32	-70	69	50
	33	-70	68	50
	34	-70	67	50
	35	-70	66	50
	36	-70	65	50
	37	-70	64	50
	38	-70	63	50
	39	-70	62	50
	40	-70	61	50
	41	-70	60	50
	42	-70	59	50
	43	-70	58	50
	44	-70	57	50
	45	-70	56	50
	46	-70	55	50
	47	-70	54	50
	48	-70	53	50
	49	-70	52	50
	50	-70	51	50
	51	-70	50	50
	52	-70	49	50
	53	-70	48	50
	54	-70	47	50
	55	-70	46	50
	56	-70	45	50
	57	-70	44	50
	58	-70	43	50
	59	-70	42	50
	60	-70	41	50
	61	-70	40	50
	62	-70	39	50
	63	-70	38	50
	64	-70	37	50
	65	-70	36	50
	66	-70	35	50
	67	-70	34	50
	68	-70	33	50
	69	-70	32	50
	70	-70	31	50
	71	-70	30	50
	1	-40	30	50
	2	-40	30	49
	3	-40	30	48
	4	-40	30	47
	5	-40	30	46
	6	-40	30	45
	7	-40	30	44
	8	-40	30	43
	9	-40	30	42
	10	-40	30	41
	11	-40	30	40
	12	-40	30	39
	13	-40	30	38
	14	-40	30	37
	15	-40	30	36
	16	-40	30	35
	17	-40	30	34
	18	-40	30	33
	19	-40	30	32
	20	-40	30	31
	21	-40	30	30
	22	-40	30	29
	23	-40	30	28
	24	-40	30	27
	25	-40	30	26
	26	-40	30	25
	27	-40	30	24
	28	-40	30	23
	29	-40	30	22
	30	-40	30	21
	31	-40	30	20
	32	-40	30	19
	33	-40	30	18
	34	-40	30	17
	35	-40	30	16
	36	-40	30	15
	37	-40	30	14
	38	-40	30	13
	39	-40	30	12
	40	-40	30	11
	41	-40	30	10
	1	-70	30	10
	2	-70	31	10
	3	-70	32	10
	4	-70	33	10
	5	-70	34	10
	6	-70	35	10
	7	-70	36	10
	8	-70	37	10
	9	-70	38	10
	10	-70	39	10
	11	-70	40	10
	12	-70	41	10
	13	-70	42	10
	14	-70	43	10
	15	-70	44	10
	16	-70	45	10
	17	-70	46	10
	18	-70	47	10
	19	-70	48	10
	20	-70	49	10
	21	-70	50	10
	22	-70	51	10
	23	-70	52	10
	24	-70	53	10
	25	-70	54	10
	26	-70	55	10
	27	-70	56	10
	28	-70	57	10
	29	-70	58	10
	30	-70	59	10
	31	-70	60	10
	32	-70	61	10
	33	-70	62	10
	34	-70	63	10
	35	-70	64	10
	36	-70	65	10
	37	-70	66	10
	38	-70	67	10
	39	-70	68	10
	40	-70	69	10
	41	-70	70	10
	42	-70	71	10
	43	-70	72	10
	44	-70	73	10
	45	-70	74	10
	46	-70	75	10
	47	-70	76	10
	48	-70	77	10
	49	-70	78	10
	50	-70	79	10
	51	-70	80	10
	52	-70	81	10
	53	-70	82	10
	54	-70	83	10
	55	-70	84	10
	56	-70	85	10
	57	-70	86	10
	58	-70	87	10
	59	-70	88	10
	60	-70	89	10
	61	-70	90	10
	62	-70	91	10
	63	-70	92	10
	64	-70	93	10
	65	-70	94	10
	66	-70	95	10
	67	-70	96	10
	68	-70	97	10
	69	-70	98	10
	70	-70	99	10
	71	-70	100	10
	1	-40	100	10
	2	-40	100	11
	3	-40	100	12
	4	-40	100	13
	5	-40	100	14
	6	-40	100	15
	7	-40	100	16
	8	-40	100	17
	9	-40	100	18
	10	-40	100	19
	11	-40	100	20
	12	-40	100	21
	13	-40	100	22
	14	-40	100	23
	15	-40	100	24
	16	-40	100	25
	17	-40	100	26
	18	-40	100	27
	19	-40	100	28
	20	-40	100	29
	21	-40	100	30
	22	-40	100	31
	23	-40	100	32
	24	-40	100	33
	25	-40	100	34
	26	-40	100	35
	27	-40	100	36
	28	-40	100	37
	29	-40	100	38
	30	-40	100	39
	31	-40	100	40
	32	-40	100	41
	33	-40	100	42
	34	-40	100	43
	35	-40	100	44
	36	-40	100	45
	37	-40	100	46
	38	-40	100	47
	39	-40	100	48
	40	-40	100	49
	41	-40	100	50
	1	5	100	30
	2	-25	99	31
	3	15	98	31
	4	-15	97	32
	5	25	96	32
	6	-5	95	33
	7	35	94	33
	8	5	93	34
	9	-25	92	35
	10	15	91	35
	11	-15	90	36
	12	25	89	36
	13	-5	88	37
	14	35	87	37
	15	5	86	38
	16	-25	85	39
	17	15	84	39
	18	-15	83	40
	19	25	82	40
	20	-5	81	41
	21	35	80	41
	22	5	79	42
	23	-25	78	43
	24	15	77	43
	25	-15	76	44
	26	25	75	44
	27	-5	74	45
	28	35	73	45
	29	5	72	46
	30	-25	71	47
	31	15	70	47
	32	-15	69	48
	33	25	68	48
	34	-5	67	49
	35	35	66	49
	36	5	65	50
	1	5	65	50
	2	-25	64	49
	3	15	63	49
	4	-15	62	48
	5	25	61	48
	6	-5	60	47
	7	35	59	47
	8	5	58	46
	9	-25	57	45
	10	15	56	45
	11	-15	55	44
	12	25	54	44
	13	-5	53	43
	14	35	52	43
	15	5	51	42
	16	-25	50	41
	17	15	49	41
	18	-15	48	40
	19	25	47	40
	20	-5	46	39
	21	35	45	39
	22	5	44	38
	23	-25	43	37
	24	15	42	37
	25	-15	41	36
	26	25	40	36
	27	-5	39	35
	28	35	38	35
	29	5	37	34
	30	-25	36	33
	31	15	35	33
	32	-15	34	32
	33	25	33	32
	34	-5	32	31
	35	35	31	31
	36	5	30	30
	1	5	30	30
	2	-25	31	29
	3	15	32	29
	4	-15	33	28
	5	25	34	28
	6	-5	35	27
	7	35	36	27
	8	5	37	26
	9	-25	38	25
	10	15	39	25
	11	-15	40	24
	12	25	41	24
	13	-5	42	23
	14	35	43	23
	15	5	44	22
	16	-25	45	21
	17	15	46	21
	18	-15	47	20
	19	25	48	20
	20	-5	49	19
	21	35	50	19
	22	5	51	18
	23	-25	52	17
	24	15	53	17
	25	-15	54	16
	26	25	55	16
	27	-5	56	15
	28	35	57	15
	29	5	58	14
	30	-25	59	13
	31	15	60	13
	32	-15	61	12
	33	25	62	12
	34	-5	63	11
	35	35	64	11
	36	5	65	10
	1	5	65	10
	2	-25	66	11
	3	15	67	11
	4	-15	68	12
	5	25	69	12
	6	-5	70	13
	7	35	71	13
	8	5	72	14
	9	-25	73	15
	10	15	74	15
	11	-15	75	16
	12	25	76	16
	13	-5	77	17
	14	35	78	17
	15	5	79	18
	16	-25	80	19
	17	15	81	19
	18	-15	82	20
	19	25	83	20
	20	-5	84	21
	21	35	85	21
	22	5	86	22
	23	-25	87	23
	24	15	88	23
	25	-15	89	24
	26	25	90	24
	27	-5	91	25
	28	35	92	25
	29	5	93	26
	30	-25	94	27
	31	15	95	27
	32	-15	96	28
	33	25	97	28
	34	-5	98	29
	35	35	99	29
	36	5	100	30
	1	-35	82	40
	2	-35	81	40
	3	-35	80	40
	4	-35	79	40
	5	-35	78	40
	6	-35	77	40
	7	-35	76	40
	8	-35	75	40
	9	-35	74	40
	10	-35	73	40
	11	-35	72	40
	12	-35	71	40
	13	-35	70	40
	14	-35	69	40
	15	-35	68	40
	16	-35	67	40
	17	-35	66	40
	18	-35	65	40
	19	-35	64	40
	20	-35	63	40
	21	-35	62	40
	22	-35	61	40
	23	-35	60	40
	24	-35	59	40
	25	-35	58	40
	26	-35	57	40
	27	-35	56	40
	28	-35	55	40
	29	-35	54	40
	30	-35	53	40
	31	-35	52	40
	32	-35	51	40
	33	-35	50	40
	34	-35	49	40
	35	-35	48	40
	36	-35	47	40
	1	-20	47	40
	2	-20	47	39
	3	-20	47	38
	4	-20	47	37
	5	-20	47	36
	6	-20	47	35
	7	-20	47	34
	8	-20	47	33
	9	-20	47	32
	10	-20	47	31
	11	-20	47	30
	12	-20	47	29
	13	-20	47	28
	14	-20	47	27
	15	-20	47	26
	16	-20	47	25
	17	-20	47	24
	18	-20	47	23
	19	-20	47	22
	20	-20	47	21
	21	-20	47	20
	1	-35	47	20
	2	-35	48	20
	3	-35	49	20
	4	-35	50	20
	5	-35	51	20
	6	-35	52	20
	7	-35	53	20
	8	-35	54	20
	9	-35	55	20
	10	-35	56	20
	11	-35	57	20
	12	-35	58	20
	13	-35	59	20
	14	-35	60	20
	15	-35	61	20
	16	-35	62	20
	17	-35	63	20
	18	-35	64	20
	19	-35	65	20
	20	-35	66	20
	21	-35	67	20
	22	-35	68	20
	23	-35	69	20
	24	-35	70	20
	25	-35	71	20
	26	-35	72	20
	27	-35	73	20
	28	-35	74	20
	29	-35	75	20
	30	-35	76	20
	31	-35	77	20
	32	-35	78	20
	33	-35	79	20
	34	-35	80	20
	35	-35	81	20
	36	-35	82	20
	1	-20	82	20
	2	-20	82	21
	3	-20	82	22
	4	-20	82	23
	5	-20	82	24
	6	-20	82	25
	7	-20	82	26
	8	-20	82	27
	9	-20	82	28
	10	-20	82	29
	11	-20	82	30
	12	-20	82	31
	13	-20	82	32
	14	-20	82	33
	15	-20	82	34
	16	-20	82	35
	17	-20	82	36
	18	-20	82	37
	19	-20	82	38
	20	-20	82	39
	21	-20	82	40

*/

