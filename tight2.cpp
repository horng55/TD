#include<graphics.h>
#include <conio.h>
int main(){
	initwindow(400 , 400 ,"right");
    setcolor(LIGHTGREEN);
	line(100, 100, 100, 200);
	line(100, 200, 200, 100);
	line(200, 100, 100, 100);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(105,105 , LIGHTGREEN);
	getch();
	closegraph();
	return 0;
}
