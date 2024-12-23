
#include <graphics.h>

int main() {
 
    initwindow(600, 600, "Draw Parallelogram");
    setcolor(WHITE);
    line(100, 300, 150, 400);
    line(100, 300, 400, 300);
    line(400, 300, 450, 400);
    line(450, 400, 150, 400);
    setfillstyle(SOLID_FILL,RED);
    floodfill(200,350,WHITE);
   getch();
    closegraph();

    return 0;
}
