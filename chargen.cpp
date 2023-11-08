#include<stdio.h>
#include<graphics.h>

int main(){
    int gd=DETECT,gm;
    

    int arr[10][10]={

        {1,1,1,1,0,1,0,0,0,1,},
        {1,0,0,1,0,1,0,0,0,1,},
        {1,0,0,1,0,1,0,0,0,1,},
        {1,0,0,1,0,1,0,0,0,1,},
        {1,1,1,1,0,1,0,0,0,1,},
        {1,0,0,0,0,1,0,0,0,1,},
        {1,0,0,0,0,1,0,0,0,1,},
        {1,0,0,0,0,1,0,1,0,1,},
        {1,0,0,0,0,0,1,1,1,0,},
        {1,0,0,0,0,0,0,1,0,0,}

    };

    initgraph(&gd,&gm," ");

    int row_scale=10;
    int col_scale=10;

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[i][j]==1){

                for(int p=i*row_scale;p<(i+1)*row_scale;p++){
                    for(int q=j*col_scale;q<(j+1)*col_scale;q++){
                    putpixel(100+q,100+p,9);
                }
                }
                
            }
        }
    }

    getch();

    }