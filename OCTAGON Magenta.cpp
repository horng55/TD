#include<graphics.h>
int main(){
    initwindow(500,500,"Drawing a Octagon");
    setcolor(BLUE);
    line(200,100,300,100);
    line(300,100,400,200);
    line(400,200,400,300);
    line(400,300,300,400);
    line(300,400,200,400);
    line(200,400,100,300);
    line(100,300,100,200);
    line(100,200,200,100);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(300,300,BLUE);
    getch();
    closegraph();
    return 0; 
}
