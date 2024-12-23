
#include <graphics.h>
 

int main() {
    initwindow(600, 600, "Draw Semicircle");
        setcolor(WHITE); 
        arc(250, 300, 0, 180, 150);
        line(100, 300, 400, 300); 
         setcolor(WHITE); 
         setfillstyle(SOLID_FILL, CYAN); 
    
    floodfill(250, 290, WHITE); 
    getch(); 
    closegraph(); 
    return 0;
}
