//Write C++/Java program to implement translation, sheer, rotation and scaling transformations
//on equilateral triangle and rhombus.
//Batch:SB-3
//Roll No:59


#include<graphics.h>
#include<iostream>
using namespace std;

int main()
{
    //Variable Declarations
    int gd=DETECT,gm=VGAMAX;
    int ch,x1,y1,x2,y2,x3,y3,xmax,ymax,xmid,ymid,choice,area,height,centerx;
    float type,Ang,Sinang,Cosang;
    float Sx,Sy;
    int tx,ty;
    int p1[10][10]={0};
    int n,i,j,i1,j1,k1,r1,c1,c2;
    int Trans_result[10][10]={0},Trans_matrix[10][10]={0};
    float Rotation_result[10][10]={0},Rotation_matrix[10][10]={0};
    float Scaling_result[10][10]={0},Scaling_matrix[10][10]={0};
    float Shearing_result[10][10],Shearing_matrix[10][10];

    //Accepting Original Object From User

    cout<<"\n\n *****************          2-D TRANSFORMATIONS            ***************";
	

    cout<<"\n\n\t\tEnter your choice:- \n 1. Equilateral Triangle \n 2.Rhombus ";
    cin>>choice;
    initgraph(&gd,&gm,NULL);
    xmax = getmaxx();
    ymax = getmaxy();
    xmid = xmax /2;
    ymid = ymax /2;

    line(xmid,0,xmid,ymax); //Y-Axis
    line(0,ymid,xmax,ymid); //X-Axis 
 
    if(choice==1)
    {
		 n=3;
		 cout<<"\nEnter the co-ordinates of the endpoints of side for Triangle Below\n";
                 cout<<"\nEnter x1: "; cin>>x1;
                 cout<<"Enter y1: "; cin>>y1;
                 cout<<"Enter x2: "; cin>>x2;
                 cout<<"Enter y2: "; cin>>y2;
		 area= (sqrt(3)/4)*(x2-x1)*(x2-x1);
		 cout<<"\n Area is \t"<<area;
                 height= (2* area)/abs(x2-x1);
		 cout<<"\n Height is \t"<<height;
		 centerx=abs(x2-x1)/2;  
		 x3=x1+centerx;    
		 y3=y1+height;            
		
                 p1[0][0]=x1;
                 p1[0][1]=y1;
                 p1[0][2]=1;
		 p1[1][0]=x2;
                 p1[1][1]=y2;
                 p1[1][2]=1;
  		 p1[2][0]=x3;
                 p1[2][1]=y3;
                 p1[2][2]=1;
                  		
   }
   else if(choice==2)
   {
		cout<<"\nRohmbus";
		n=4;
                cout<<"\nEnter the co-ordinates of the endpoints of side for Rohmbus Below\n";
                cout<<"\nEnter x1: "; cin>>x1;
                cout<<"Enter y1: "; cin>>y1;
                cout<<"Enter x2: "; cin>>x2;
                cout<<"Enter y2: "; cin>>y2;
	        int xlength=abs(x2-x1);
		int ylength=abs(y2-y1);
		x3=x2+xlength;    
		y3=y2+xlength;
		int x4=x1+xlength;    
		int y4=y1+xlength;
		cout<<"\nx3 =: "<<x3; 
                cout<<"\n y3: "<<y3; 
                cout<<"\nx3 =: "<<x4; 
                cout<<"\n y3: "<<y4; 

		p1[0][0]=x1;
                p1[0][1]=y1;
                p1[0][2]=1;
		p1[1][0]=x2;
                p1[1][1]=y2;
                p1[1][2]=1;
  		p1[2][0]=x3;
                p1[2][1]=y3;
                p1[2][2]=1;
		p1[3][0]=x4;
                p1[3][1]=y4;
                p1[3][2]=1;
    }
    else
    {
         cout<<"\n\nSorry! You Entered Wrong Choice.\n\n";
         exit(0);
    }


    r1=n;c1=c2=3;
     	
    for(i=0;i<n;i++)
    {
		cout<<"\n";
		for(int j=0;j<3;j++)
		{
			cout<<p1[i][j]<<"\t";
		}
    }

  
    
    //Draw Original Object      
    for(i=0;i<n;i++)
    {
        cout<<"Value of n is ="<<n;
	   if(i<n-1)
	   {
		cout<<"i =\n"<<i;
          cout<<"p1[i][0]+320 =  "<<p1[i][0]+320;
          cout<<"\n -p1[i][1]+240 = "<<-p1[i][1]+240;
		cout<<"\n p1[i+1][0]+320 = "<<p1[i+1][0]+320; 
		cout<<"\n -p1[i+1][1]+240 = "<<-p1[i+1][1]+240;
		line(p1[i][0]+320, -p1[i][1]+240, p1[i+1][0]+320, -p1[i+1][1]+240);
	   }		
           else
		line(p1[i][0]+320, -p1[i][1]+240, p1[0][0]+320, -p1[0][1]+240);
     }

     while(1)
     {
       xmax = getmaxx();
       ymax = getmaxy();
       xmid = xmax /2;
       ymid = ymax /2;

      
       
       cout<<"\n\n\n1.Translation..";
       cout<<"\n2.Rotation..";
       cout<<"\n3.Scaling...";
       cout<<"\n4.Shearing";
       cout<<"\n5.Exit";
       cout<<"\nEnter your choice: ";
       cin>>ch;

       switch(ch)
       {
       

         case 1: 
                 //Prepare Translation Matrix
                 cout << "\n\n\t\tEnter X-Translation tx: ";
	         cin >>tx;
	         cout << "\n\n\t\tEnter Y-Translation ty: ";
		 cin >>ty;

		 Trans_matrix[0][0] = 1;
		 Trans_matrix[0][1] = 0;
		 Trans_matrix[0][2] = 0;
		 Trans_matrix[1][0] = 0;
		 Trans_matrix[1][1] = 1;
		 Trans_matrix[1][2] = 0;
		 Trans_matrix[2][0] = tx;
		 Trans_matrix[2][1] = ty;
		 Trans_matrix[2][2] = 1;

                 //Multiply Matrices
		 for(i1=0;i1<10;i1++)
		 for(j1=0;j1<10;j1++)
			Trans_result[i1][j1] = 0;

		 for(i1=0;i1<r1;i1++)
		 {
		 for(j1=0;j1<c2;j1++)
		 {
		 for(k1=0;k1<c1;k1++)
		 {	
			Trans_result[i1][j1] = Trans_result[i1][j1]+(p1[i1][k1] * Trans_matrix[k1][j1]);
		 }
		 }
		 }

                 //Printing Resultant Translated Matrix
                  cout<<"\n\n\t\t2-D Object after Translation:\n";
                  for(i=0;i<n;i++)
	         {
		     cout<<"\n\t\t";
		     for(int j=0;j<3;j++)
		     {  
			
			cout<<Trans_result[i][j]<<"\t";
		     }
                
	         }


                 //Drawing Resultant Translated Object
              
                 setcolor(BLUE);
		 for(i=0;i<n;i++)
		 {
			if(i<n-1)
			{
				line(Trans_result[i][0]+320, -Trans_result[i][1]+240, Trans_result[i+1][0]+320, -Trans_result[i+1][1]+240);
			
			}		
			else
				line(Trans_result[i][0]+320, -Trans_result[i][1]+240, Trans_result[0][0]+320, -Trans_result[0][1]+240);
		 }
     
                  setcolor(WHITE);
                 break;


         case 2: 
                    //Prepare Rotation Matrix
                    cout << "\n\n **** Rotation Types ****";
	 	    cout << "\n\n\t\t1.Clockwise Rotation \n\n\t\t2.Anti-Clockwise Rotation ";
		    cout << "\n\n\t\tEnter your choice(1-2): ";
		    cin >> type;

		    cout << "\n\n\t\tEnter the angle of rotation in degrees: ";
		    cin >> Ang;
	
		    Ang = (Ang * 6.2832)/360;
		    Sinang = sin(Ang);
		    Cosang = cos(Ang);
       
		    for(i=0;i<3;i++)
		    for(j=0;j<3;j++)
			Rotation_matrix[i][j] = 0;
       
		    Rotation_matrix[0][0] = Rotation_matrix[1][1] = Cosang;
	 	    Rotation_matrix[0][1] = Rotation_matrix[1][0] = Sinang;
		    Rotation_matrix[2][2] = 1;

		    if(type == 1)
			Rotation_matrix[0][1] = -Sinang;
		    else
			Rotation_matrix[1][0] = -Sinang;


                    //Multiply Matrices	
        	    for(i1=0;i1<10;i1++)
		    for(j1=0;j1<10;j1++)
			Rotation_result[i1][j1] = 0;
		    for(i1=0;i1<r1;i1++)
		    for(j1=0;j1<c2;j1++)
	            for(k1=0;k1<c1;k1++)
			Rotation_result[i1][j1] = Rotation_result[i1][j1]+(p1[i1][k1] * Rotation_matrix[k1][j1]);

                   //Printing Resultant Rotated Matrix
                   cout<<"\n\n\t\t2-D  after Rotation:\n";
                   for(i=0;i<n;i++)
	           {
		     cout<<"\n\t\t";
		     for(int j=0;j<3;j++)
		     {  
			
			cout<<Rotation_result[i][j]<<"\t";
		     }
                
	           }

                    //Drawing Resultant Rotated Object
                   
                    setcolor(RED);
		    for(i=0;i<n;i++)
		    {
			if(i<n-1)
			{
   line(Rotation_result[i][0]+320, -Rotation_result[i][1]+240, Rotation_result[i+1][0]+320, -Rotation_result[i+1][1]+240);
			}		
			else
    line(Rotation_result[i][0]+320, -Rotation_result[i][1]+240, Rotation_result[0][0]+320, -Rotation_result[0][1] +240);
		    }
                    
                   setcolor(WHITE);
                    break;

         case 3: 
                 //Prepare Scaling Matrices
                 cout<<"\n\n\t\tEnter X-Scaling Sx: ";
	         cin>>Sx;
	         cout<<"\n\n\t\tEnter Y-Scaling Sy: ";
	         cin>>Sy;
        
		 for(i=0;i<3;i++)
		 {
			for(j=0;j<3;j++)
			{	
				Scaling_matrix[i][j] = 0;
			}
		 }

		 Scaling_matrix[0][0] = Sx;
		 Scaling_matrix[0][1] = 0;
		 Scaling_matrix[0][2] = 0;
		 Scaling_matrix[1][0] = 0;
		 Scaling_matrix[1][1] = Sy;
		 Scaling_matrix[1][2] = 0;
		 Scaling_matrix[2][0] = 0;
		 Scaling_matrix[2][1] = 0;
		 Scaling_matrix[2][2] = 1;

                 //Multiply Matrices
                 for(i1=0;i1<10;i1++)
	         for(j1=0;j1<10;j1++)
			Scaling_result[i1][j1] = 0;
		 for(i1=0;i1<r1;i1++)
		 for(j1=0;j1<c2;j1++)
		 for(k1=0;k1<c1;k1++)
			Scaling_result[i1][j1] = Scaling_result[i1][j1]+(p1[i1][k1] * Scaling_matrix[k1][j1]);

                  //Printing Resultant Scaled Matrix
                   cout<<"\n\n\t\tPolygon after Scaling:\n";
                   for(i=0;i<n;i++)
	           {
		     cout<<"\n\t\t";
		     for(int j=0;j<3;j++)
		     {  
			
			cout<<Scaling_result[i][j]<<"\t";
		     }
                
	           }

                 //Drawing Resultant Scaled Object
                 
                 setcolor(YELLOW);
		 for(i=0;i<n;i++)
		 {
		    if(i<n-1)
		    {
 line(Scaling_result[i][0]+320, -Scaling_result[i][1]+240, Scaling_result[i+1][0]+320, -Scaling_result[i+1][1]+240);
	  	    }
   		    else
		    {
    	      line(Scaling_result[i][0]+320, -Scaling_result[i][1]+240, Scaling_result[0][0]+320, -Scaling_result[0][1]+240);
		    }
	         }
                  setcolor(WHITE);
                 break;

           case 4: 
                 //Prepare Shearing Matrices
                 for(i=0;i<3;i++)
	         for(j=0;j<3;j++)
		 {
			if(i == j)
				Shearing_matrix[i][j] = 1;
			else
				Shearing_matrix[i][j] = 0;
		}
		cout << "\n\n **** Shearing Types ****";
		cout << "\n\n\t\t1.X-Direction Shear \n\n\t\t2.Y-Direction Shear ";
		cout << "\n\n\t\tEnter your choice(1-2): ";
		cin >> type;
		if(type == 1)
		{
			cout << "\n\n\t\tEnter X-Shear Sx: ";
			cin >> Sx;
			Shearing_matrix[1][0] = Sx;
		}
		else
		{
			cout << "\n\n\t\tEnter Y-Shear Sy: ";
			cin >> Sy;
			Shearing_matrix[0][1] = Sy;
		}
	

                 //Multiply Matrices
                 for(i1=0;i1<10;i1++)
	         for(j1=0;j1<10;j1++)
			Shearing_result[i1][j1] = 0;
		 for(i1=0;i1<r1;i1++)
		 for(j1=0;j1<c2;j1++)
		 for(k1=0;k1<c1;k1++)
			Shearing_result[i1][j1] = Shearing_result[i1][j1]+(p1[i1][k1] * Shearing_matrix[k1][j1]);

                  //Printing Resultant Sheared Matrix
                   cout<<"\n\n\t\tPolygon after Shearing:\n";
                   for(i=0;i<n;i++)
	           {
		     cout<<"\n\t\t";
		     for(int j=0;j<3;j++)
		     {  
			
			cout<<Shearing_result[i][j]<<"\t";
		     }
                
	           }

                 //Drawing Resultant Sheared Object
                 
                 setcolor(GREEN);
		 for(i=0;i<n;i++)
		 {
		    if(i<n-1)
		    {
 line(Shearing_result[i][0]+320, -Shearing_result[i][1]+240, Shearing_result[i+1][0]+320, -Shearing_result[i+1][1]+240);
	  	    }
   		    else
		    {
     line(Shearing_result[i][0]+320, -Shearing_result[i][1]+240, Shearing_result[0][0]+320, -Shearing_result[0][1]+240);
		    }
	         }
                 setcolor(WHITE);
                 break;

         case 5:
                 exit(0);
                 break;

       }

      

   }

   delay(3000);
   closegraph();
   return 0;


}

/****************************OUTPUT**************************
gescoe@uchita:~$ cd Desktop
gescoe@uchita:~/Desktop$ g++ 10.cpp -o  10 -lgraph 
gescoe@uchita:~/Desktop$ ./10


 *****************          2-D TRANSFORMATIONS            ***************

		Enter your choice:- 
 1. Equilateral Triangle 
 2.Rhombus 1

Enter the co-ordinates of the endpoints of side for Triangle Below

Enter x1: [xcb] Unknown sequence number while processing queue
[xcb] Most likely this is a multi-threaded client and XInitThreads has not been called
[xcb] Aborting, sorry about that.
10: ../../src/xcb_io.c:274: poll_for_event: Assertion `!xcb_xlib_threads_sequence_lost' failed.
1
Enter y1: 60
Enter x2: 60
Enter y2: 60

 Area is 	1507
 Height is 	51
1	60	1	
60	60	1	
30	111	1	Value of n is =3i =
0p1[i][0]+320 =  321
 -p1[i][1]+240 = 180
 p1[i+1][0]+320 = 380
 -p1[i+1][1]+240 = 180Value of n is =3i =
1p1[i][0]+320 =  380
 -p1[i][1]+240 = 180
 p1[i+1][0]+320 = 350
 -p1[i+1][1]+240 = 129Value of n is =3


1.Translation..
2.Rotation..
3.Scaling...
4.Shearing
5.Exit
Enter your choice: 1


		Enter X-Translation tx: 20


		Enter Y-Translation ty: 15


		2-D Object after Translation:

		21	75	1	
		80	75	1	
		50	126	1	


1.Translation..
2.Rotation..
3.Scaling...
4.Shearing
5.Exit
Enter your choice: 2


 **** Rotation Types ****

		1.Clockwise Rotation 

		2.Anti-Clockwise Rotation 

		Enter your choice(1-2): 1


		Enter the angle of rotation in degrees: 45


		2-D  after Rotation:

		43.1336	41.7192	1	
		84.8528	-0.000152588	1	
		99.7022	57.2755	1	


1.Translation..
2.Rotation..
3.Scaling...
4.Shearing
5.Exit
Enter your choice: 3


		Enter X-Scaling Sx: 1


		Enter Y-Scaling Sy: 2


		Polygon after Scaling:

		1	120	1	
		60	120	1	
		30	222	1	


1.Translation..
2.Rotation..
3.Scaling...
4.Shearing
5.Exit
Enter your choice: 4


 **** Shearing Types ****

		1.X-Direction Shear 

		2.Y-Direction Shear 

		Enter your choice(1-2): 1


		Enter X-Shear Sx: 2


		Polygon after Shearing:

		121	60	1	
		180	60	1	
		252	111	1	


1.Translation..
2.Rotation..
3.Scaling...
4.Shearing
5.Exit
Enter your choice: 5


gescoe@uchita:~$ cd Desktop
gescoe@uchita:~/Desktop$ g++ 10.cpp -o  10 -lgraph 
gescoe@uchita:~/Desktop$ ./10


 *****************          2-D TRANSFORMATIONS            ***************

		Enter your choice:- 
 1. Equilateral Triangle 
 2.Rhombus 2

Rohmbus
Enter the co-ordinates of the endpoints of side for Rohmbus Below

Enter x1: [xcb] Unknown sequence number while processing queue
[xcb] Most likely this is a multi-threaded client and XInitThreads has not been called
[xcb] Aborting, sorry about that.
10: ../../src/xcb_io.c:274: poll_for_event: Assertion `!xcb_xlib_threads_sequence_lost' failed.
50
Enter y1: 60
Enter x2: 70
Enter y2: 70

x3 =: 90
 y3: 90
x3 =: 70
 y3: 80
50	60	1	
70	70	1	
90	90	1	
70	80	1	Value of n is =4i =
0p1[i][0]+320 =  370
 -p1[i][1]+240 = 180
 p1[i+1][0]+320 = 390
 -p1[i+1][1]+240 = 170Value of n is =4i =
1p1[i][0]+320 =  390
 -p1[i][1]+240 = 170
 p1[i+1][0]+320 = 410
 -p1[i+1][1]+240 = 150Value of n is =4i =
2p1[i][0]+320 =  410
 -p1[i][1]+240 = 150
 p1[i+1][0]+320 = 390
 -p1[i+1][1]+240 = 160Value of n is =4


1.Translation..
2.Rotation..
3.Scaling...
4.Shearing
5.Exit
Enter your choice: 1


		Enter X-Translation tx: 20


		Enter Y-Translation ty: 15


		2-D Object after Translation:

		70	75	1	
		90	85	1	
		110	105	1	
		90	95	1	


1.Translation..
2.Rotation..
3.Scaling...
4.Shearing
5.Exit
Enter your choice: 2


 **** Rotation Types ****

		1.Clockwise Rotation 

		2.Anti-Clockwise Rotation 

		Enter your choice(1-2): 2


		Enter the angle of rotation in degrees: 45


		2-D  after Rotation:

		-7.07121	77.7817	1	
		-0.000179291	98.9949	1	
		-0.000232697	127.279	1	
		-7.07126	106.066	1	


1.Translation..
2.Rotation..
3.Scaling...
4.Shearing
5.Exit
Enter your choice: 3


		Enter X-Scaling Sx: 1


		Enter Y-Scaling Sy: 2


		Polygon after Scaling:

		50	120	1	
		70	140	1	
		90	180	1	
		70	160	1	


1.Translation..
2.Rotation..
3.Scaling...
4.Shearing
5.Exit
Enter your choice: 4


 **** Shearing Types ****

		1.X-Direction Shear 

		2.Y-Direction Shear 

		Enter your choice(1-2): 1


		Enter X-Shear Sx: 2


		Polygon after Shearing:

		170	60	1	
		210	70	1	
		270	90	1	
		230	80	1	


1.Translation..
2.Rotation..
3.Scaling...
4.Shearing
5.Exit
Enter your choice: 5
gescoe@uchita:~/Desktop$ 
***************************************/
