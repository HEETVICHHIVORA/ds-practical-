#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
   int x1,y1,x2,y2,dx,dy,step,i=0,m=0;
   float incx,incy;    
   /* request auto detection */
   int gd = DETECT, gm;
   /* initialize graphics and local variables */
   initgraph(&gd, &gm,(char*) "");
   
  // Here is Step 1 of Algorithm 

   printf("enter the starting coordinate of line");
   scanf("%d %d", &x1,&y1);
   printf("enter the End coordinate of line");
   scanf("%d %d", &x2,&y2);
  
   // Here is Step 2 of Algorithm
   dx=x2-x1;
   dy=y2-y1;

  // Here is Step 3 of Algorithm
      if(dx>dy)
      {
         step=dx;
      }
      else
      {
         step=dy;
      }

     // Here is Step 4 of Algorithm
     incx=dx/step;
     incy=dy/step;

    // Here is Step 5 of Algorithm
     putpixel(x1,y1,15);
     i=1; 

   // Here is Step 6 of Algorithm
    while(i<=step)
    {
                if(m < 1)
               {
               x1=x1+incx;
               y1=y1+incy;
               m=m+1;
               }
              else
             { 
             x1=x1+incx;
             y1=y1+incy;
             putpixel(x1,y1,15);
             m=0;
             }
      i=i+1;
     }
   /* clean up */
    getch();
    closegraph();
    return 0;
}