//Write C++/Java program to draw line using DDA and Bresenham‘s algorithm. Inherit pixel class and Use function overloading. 
//Roll no.:

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

      
      void drawl(int colour) //DDA Line
      {
          float x,y,dx,dy,len;
          int i;
          int xmax,xmid,ymax,ymid;
          xmax = getmaxx();
          ymax = getmaxy();
          xmid = xmax /2;
          ymid = ymax /2;
          pt::setcolor(colour);
           
          
          //step2 
          dx=abs(x2-xco);    
          dy=abs(y2-yco);

          //step3
          if(dx >= dy)
          {
             len=dx;
          }
          else
          {
             len=dy;
          }

          //step4
          dx=(x2-xco)/len;
          dy=(y2-yco)/len;

          //step5
          x = xco + 0.5;
          y = yco + 0.5;
          pt::setco(x,y);
          pt::draw();
          cout<<"\t"<<1;
          cout<<"\t"<<x-xmid;
          cout<<"\t\t"<<ymid-y<<endl;

          //step6
          i=1;
          while(i<=len)
          {
               x = x + dx;
               y = y + dy;
               i = i + 1;
               pt::setco(x,y);
               pt::draw();               
               cout<<"\t"<<i;
               cout<<"\t"<<x-xmid;
               cout<<"\t\t"<<ymid-y<<endl;
         }

     
     }//function closed

};

int main()
{
    int gd=DETECT,gm=VGAMAX;
    int ch,x1,y1,x2,y2, xmax,ymax,xmid,ymid;
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

    while(1)
    {
       xmax = getmaxx();
       ymax = getmaxy();
       xmid = xmax /2;
       ymid = ymax /2;

      
       cout<<"\n1.DDA LINE..";
       cout<<"\n2.BRESENHAM'S LINE..";
       cout<<"\n3.EXIT..";
       cout<<"\nEnter your choice: ";
       cin>>ch;

       switch(ch)
       {
         case 1:
                 cout<<"\nEnter the co-ordinates of the endpoints of line Below";
                 cout<<"\nEnter x1: "; cin>>x1;
                 cout<<"Enter y1: "; cin>>y1;
                 cout<<"Enter x2: "; cin>>x2;
                 cout<<"Enter y2: "; cin>>y2;
                 
                 cout<<"\nFollowing Result Table Shows Step-by-Step Processing\n"; 
                 cout<<"\n------------------------------------------------------------------\n";
                 cout<<"\ti\tx\t\ty\n";
                 cout<<"-----------------------------------------------------------------\n";
                 dda.setline(x1+xmid,ymid-y1,x2+xmid,ymid-y2);
                 dda.drawl(15);
                 break;

         case 2:
                 cout<<"\nEnter the co-ordinates of the endpoints of line Below\n";
                 cout<<"\nEnter x1: "; cin>>x1;
                 cout<<"Enter y1: "; cin>>y1;
                 cout<<"Enter x2: "; cin>>x2;
                 cout<<"Enter y2: "; cin>>y2;
               
                 cout<<"\nFollowing Result Table Shows Step-by-Step Processing\n"; 
                 cout<<"\n------------------------------------------------------------------\n";
                 cout<<"\ti\te\tx\ty\n";
                 cout<<"-----------------------------------------------------------------\n";
                 dda.setline(x1+xmid,ymid-y1,x2+xmid,ymid-y2);
                 dda.drawl();
                 break;

         case 3:
                 exit(0);
                 break;

       }

      

   }

   delay(3000);
   closegraph();
   return 0;


}


/*
output:
gescoe@abc:~$ cd Desktop
gescoe@abc:~/Desktop$ cd SJ
gescoe@abc:~/Desktop/SJ$ cd cg
gescoe@abc:~/Desktop/SJ/cg$ g++ 001cg7.cpp -lgraph
gescoe@abc:~/Desktop/SJ/cg$ ./a.out

1.DDA LINE..
2.BRESENHAM'S LINE..
3.EXIT..
Enter your choice: 
1

Enter the co-ordinates of the endpoints of line Below
Enter x1: 100
Enter y1: 50
Enter x2: -50
Enter y2: -50

Following Result Table Shows Step-by-Step Processing

------------------------------------------------------------------
	i	x		y
-----------------------------------------------------------------
	1	100.5		49.5
	2	99.5		48.8333
	3	98.5		48.1667
	4	97.5		47.5
	5	96.5		46.8333
	6	95.5		46.1666
	7	94.5		45.5
	8	93.5		44.8333
	9	92.5		44.1666
	10	91.5		43.5
	11	90.5		42.8333
	12	89.5		42.1666
	13	88.5		41.4999
	14	87.5		40.8333
	15	86.5		40.1666
	16	85.5		39.4999
	17	84.5		38.8333
	18	83.5		38.1666
	19	82.5		37.4999
	20	81.5		36.8332
	21	80.5		36.1666
	22	79.5		35.4999
	23	78.5		34.8332
	24	77.5		34.1665
	25	76.5		33.4999
	26	75.5		32.8332
	27	74.5		32.1665
	28	73.5		31.4999
	29	72.5		30.8332
	30	71.5		30.1665
	31	70.5		29.4998
	32	69.5		28.8332
	33	68.5		28.1665
	34	67.5		27.4998
	35	66.5		26.8332
	36	65.5		26.1665
	37	64.5		25.4998
	38	63.5		24.8331
	39	62.5		24.1665
	40	61.5		23.4998
	41	60.5		22.8331
	42	59.5		22.1665
	43	58.5		21.4998
	44	57.5		20.8331
	45	56.5		20.1664
	46	55.5		19.4998
	47	54.5		18.8331
	48	53.5		18.1664
	49	52.5		17.4998
	50	51.5		16.8331
	51	50.5		16.1664
	52	49.5		15.4997
	53	48.5		14.8331
	54	47.5		14.1664
	55	46.5		13.4997
	56	45.5		12.8331
	57	44.5		12.1664
	58	43.5		11.4997
	59	42.5		10.833
	60	41.5		10.1664
	61	40.5		9.49969
	62	39.5		8.83302
	63	38.5		8.16635
	64	37.5		7.49968
	65	36.5		6.83301
	66	35.5		6.16634
	67	34.5		5.49966
	68	33.5		4.83299
	69	32.5		4.16632
	70	31.5		3.49965
	71	30.5		2.83298
	72	29.5		2.16631
	73	28.5		1.49963
	74	27.5		0.832962
	75	26.5		0.16629
	76	25.5		-0.500381
	77	24.5		-1.16705
	78	23.5		-1.83372
	79	22.5		-2.5004
	80	21.5		-3.16707
	81	20.5		-3.83374
	82	19.5		-4.50041
	83	18.5		-5.16708
	84	17.5		-5.83376
	85	16.5		-6.50043
	86	15.5		-7.1671
	87	14.5		-7.83377
	88	13.5		-8.50044
	89	12.5		-9.16711
	90	11.5		-9.83379
	91	10.5		-10.5005
	92	9.5		-11.1671
	93	8.5		-11.8338
	94	7.5		-12.5005
	95	6.5		-13.1671
	96	5.5		-13.8338
	97	4.5		-14.5005
	98	3.5		-15.1672
	99	2.5		-15.8338
	100	1.5		-16.5005
	101	0.5		-17.1672
	102	-0.5		-17.8338
	103	-1.5		-18.5005
	104	-2.5		-19.1671
	105	-3.5		-19.8338
	106	-4.5		-20.5005
	107	-5.5		-21.1671
	108	-6.5		-21.8338
	109	-7.5		-22.5004
	110	-8.5		-23.1671
	111	-9.5		-23.8337
	112	-10.5		-24.5004
	113	-11.5		-25.1671
	114	-12.5		-25.8337
	115	-13.5		-26.5004
	116	-14.5		-27.167
	117	-15.5		-27.8337
	118	-16.5		-28.5003
	119	-17.5		-29.167
	120	-18.5		-29.8336
	121	-19.5		-30.5003
	122	-20.5		-31.167
	123	-21.5		-31.8336
	124	-22.5		-32.5003
	125	-23.5		-33.1669
	126	-24.5		-33.8336
	127	-25.5		-34.5002
	128	-26.5		-35.1669
	129	-27.5		-35.8336
	130	-28.5		-36.5002
	131	-29.5		-37.1669
	132	-30.5		-37.8335
	133	-31.5		-38.5002
	134	-32.5		-39.1668
	135	-33.5		-39.8335
	136	-34.5		-40.5002
	137	-35.5		-41.1668
	138	-36.5		-41.8335
	139	-37.5		-42.5001
	140	-38.5		-43.1668
	141	-39.5		-43.8334
	142	-40.5		-44.5001
	143	-41.5		-45.1667
	144	-42.5		-45.8334
	145	-43.5		-46.5001
	146	-44.5		-47.1667
	147	-45.5		-47.8334
	148	-46.5		-48.5
	149	-47.5		-49.1667
	150	-48.5		-49.8333
	151	-49.5		-50.5

1.DDA LINE..
2.BRESENHAM'S LINE..
3.EXIT..
Enter your choice:3

*/
