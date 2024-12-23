#include<graphics.h>
int main(){
    initwindow(500,500, "Drawing a Rhombus");
    setcolor(BLUE);
    line ( 250,100,350,250);
    line (350,250,250,400);
    line(250,400,150,250);
    line(150,250,250,100);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(300,300,BLUE);
    getch();
    closegraph();
    return 0;
    }
    
    
    
    
    
    
    
    
    
