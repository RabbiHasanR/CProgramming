#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int x1=100; int y1=200;
    int x2=300; int y2=100;
    int x3=500; int y3=200;
    int x4=500; int y4=400;
    int x5=325; int y5=400;
    int x6=275; int y6=325;
    initwindow(640,500,"painted house - press a key to close");
    //draw a roof
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    //draw a rest of house
    rectangle(x1,y1,x4,y4);
    //paint the house
    setfillstyle(XHATCH_FILL,RED);
    floodfill(x2,y2+1,WHITE);
    setfillstyle(INTERLEAVE_FILL,GREEN);
    floodfill(x2,y1+1,WHITE);
    setfillstyle(CLOSE_DOT_FILL,BLUE);
    bar(x5,y5,x6,y6);
    getch();
    closegraph();
    return 0;
}
