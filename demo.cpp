#include<graphics.h> 
#include<iostream> 
#include<stdlib.h> 
#include<math.h> 
using namespace std; 

int main() 
{ 
int gd=DETECT,gm=VGAMAX; 
 
initgraph(&gd,&gm,NULL); 
drawline(100,200,300,200);


delay(3000);
   closegraph();
   return 0;

}
