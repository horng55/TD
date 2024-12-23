#include<graphics.h>
int main(){
    initwindow(500,500,"Drawing a crescent");
    setcolor(BLUE);
    arc(250,250,155,25,150);
    arc(250,125,205,335,150);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(300,300,BLUE);
    getch();
    closegraph();
    return 0;
    }
