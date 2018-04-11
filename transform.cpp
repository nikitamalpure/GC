//Write C++/Java program to draw 2-D object and perform following basic transformations,
//a) Scaling
//b) Translation
//c) Rotation 


#include<graphics.h>
#include<iostream>
using namespace std;

int main()
{
    //Variable Declarations
    int gd=DETECT,gm=VGAMAX;
    int ch,x1,y1,x2,y2, xmax,ymax,xmid,ymid;
    float type,Ang,Sinang,Cosang;
    float Sx,Sy;
    int tx,ty;
    int p1[10][10]={0};
    int n,i,j,i1,j1,k1,r1,c1,c2;
    int Trans_result[10][10]={0},Trans_matrix[10][10]={0};
    float Rotation_result[10][10]={0},Rotation_matrix[10][10]={0};
    float Scaling_result[10][10]={0},Scaling_matrix[10][10]={0};

    //Accepting Original Object From User

    cout<<"\n\n *****************          2-D TRANSFORMATIONS            ***************";
	

    cout<<"\n\n\t\tEnter no.of vertices:";
    cin>>n;
    r1=n;c1=c2=3;

       for(i=0;i<n;i++)
	{
		cout<<"\n\n\t\tEnter (x,y)Co-ordinate of point P"<<i<<": ";
		cin >> p1[i][0] >> p1[i][1];
		p1[i][2] = 1;

	}
	
	for(i=0;i<n;i++)
	{
		cout<<"\n";
		for(int j=0;j<3;j++)
		{
			cout<<p1[i][j]<<"\t";
		}
	}


        

      
    initgraph(&gd,&gm,NULL);
   
    xmax = getmaxx();
    ymax = getmaxy();
    xmid = xmax /2;
    ymid = ymax /2;

    line(xmid,0,xmid,ymax); //Y-Axis
    line(0,ymid,xmax,ymid); //X-Axis 
 
    //Draw Original Object      
    for(i=0;i<n;i++)
    {
	   if(i<n-1)
	   {
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
       cout<<"\n4.Exit";
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
                 exit(0);
                 break;

       }

      

   }

   delay(3000);
   closegraph();
   return 0;


}
**********************OUTPUT****************************
gescoe@abc:~$ cd Desktop
gescoe@abc:~/Desktop$ g++ 3.cpp -o 3 -lgraph
gescoe@abc:~/Desktop$ ./3


 *****************          2-D TRANSFORMATIONS            ***************

		Enter no.of vertices:4


		Enter (x,y)Co-ordinate of point P0: 40
40


		Enter (x,y)Co-ordinate of point P1: 60
60


		Enter (x,y)Co-ordinate of point P2: 20
20


		Enter (x,y)Co-ordinate of point P3: 10
10

40	40	1	
60	60	1	
20	20	1	
10	10	1	


1.Translation..
2.Rotation..
3.Scaling...
4.Exit
Enter your choice: [xcb] Unknown sequence number while processing queue
[xcb] Most likely this is a multi-threaded client and XInitThreads has not been called
[xcb] Aborting, sorry about that.
3: ../../src/xcb_io.c:274: poll_for_event: Assertion `!xcb_xlib_threads_sequence_lost' failed.
10	10	1	1


		Enter X-Translation tx: 100


		Enter Y-Translation ty: 100


		2-D Object after Translation:

		140	140	1	
		160	160	1	
		120	120	1	
		110	110	1	


1.Translation..
2.Rotation..
3.Scaling...
4.Exit
Enter your choice: 2


 **** Rotation Types ****

		1.Clockwise Rotation 

		2.Anti-Clockwise Rotation 

		Enter your choice(1-2): 2


		Enter the angle of rotation in degrees: 90 


		2-D  after Rotation:

		-40.0001	39.9999	1	
		-60.0002	59.9998	1	
		-20.0001	19.9999	1	
		-10	9.99996	1	


1.Translation..
2.Rotation..
3.Scaling...
4.Exit
Enter your choice: 3


		Enter X-Scaling Sx: 2


		Enter Y-Scaling Sy: 3


		Polygon after Scaling:

		80	120	1	
		120	180	1	
		40	60	1	
		20	30	1	


1.Translation..
2.Rotation..
3.Scaling...
4.Exit
Enter your choice: 4
gescoe@abc:~/Desktop$ 
*******************************************************************
