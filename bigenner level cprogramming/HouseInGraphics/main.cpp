#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main(void){
    initwindow(500,400,"Home");
    setcolor(YELLOW);

    line(100,200,250,100);
    line(250,100,400,200);
     setcolor(BROWN);
    rectangle(400,200,100,300);
     setcolor(RED);
    rectangle(300,250,200,300);
    setfillstyle(HATCH_FILL,LIGHTGRAY);
    circle(250,250,15);
    getch();
    closegraph();
return 0 ;
}
