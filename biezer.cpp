#include<graphics.h>
#include<math.h>
 void bizer(int x[],int y[] , int color){
      int gd = DETECT ,gm ;
      initgraph(&gd,&gm,"");
        for(double t=0;t<1;t+=0.0005){
            double xt=x[0]*pow(1-t,3)  +x[1]*3*t*pow(1-t,2)  +  x[2]*3*pow(t,2)*(1-t)  + x[3]*pow(t,3);
        double yt=y[0]*pow(1-t,3)  +y[1]*3*t*pow(1-t,2)  +  y[2]*3*pow(t,2)*(1-t)  + y[3]*pow(t,3);
            putpixel(xt,yt,10);
        }
        for(int i=0;i<4;i++){
      putpixel(x[i],y[i],10);
    }
}
int main (){
   
  int gd = DETECT ,gm ;
    
    int x[4];
    int y[4];
    for (int i =0;i<4;i++){
        scanf("%d%d",&x[i],&y[i]);
    }
        

    bizer(x,y,5);
    getch();
    return 0;
}