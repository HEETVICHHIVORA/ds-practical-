#include<graphics.h>
void flood(int a,int b ,int fc ,int bc){
    int current = getpixel(a,b);
    if(current!=fc&&current!=bc){
        putpixel(a,b,fc);
        flood( a+1, b , fc , bc);
        flood( a-1, b , fc , bc);
        flood( a, b+1 , fc , bc);
        flood( a, b-1 , fc , bc);

    }
}
void floood(int a,int b,int fc,int dc){
    int current = getpixel(a,b);
    if(current != fc && current==dc){
        putpixel(a,b,fc);
        floood(a+1,b,fc,dc);
        floood(a-1,b,fc,dc);
        floood(a,b+1,fc,dc);
        floood(a,b-1,fc,dc);


    }

}

int main (){
    int gd = DETECT ,gm;
    initgraph(&gd,&gm,"");
    circle(200,200,50 );
    flood(200,200,4,15);
    floood(200,200,5,4);
    return 0 ;

}