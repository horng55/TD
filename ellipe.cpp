#include <graphics.h>
#include <conio.h>

int main() {

    initwindow(600, 600, "Draw ellipse");
    setcolor(BLUE);
    ellipse(300, 300, 0, 360, 100, 200);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(300,300,BLUE);
    getch();
    closegraph();

    return 0;
}

