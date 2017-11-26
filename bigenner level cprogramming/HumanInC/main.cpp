#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void head();
void neck();
void body();
void left_hand();
void right_hand();
void left_leg();
void right_leg();
int main(){
    initwindow(900,9000,"HUMAN");
 setcolor(RED);
 head();
 setcolor(WHITE);
 neck();
 setcolor(RED);
 body();
 setcolor(GREEN);
 right_hand();
 setcolor(GREEN);
 left_hand();
 setcolor(BROWN);
 left_leg();
 setcolor(BROWN);
 right_leg();

getch();
closegraph();
return 0 ;
}
void head(){
circle(400,90,69);

}
void neck(){
    rectangle(380,200,420,160);
}
void body(){
 rectangle(250,200,550,500);
}
void left_hand(){
      line(180,250,250,250);
    line(200,270,250,270);
    line(180,250,180,458);
     line(200,270,200,458);
    circle(190,480,30);
}
void right_hand(){
    line(550,250,620,250);
    line(550,270,595,270);
    line(595,270,595,458);
    line(620,250,620,458);
    circle(610,480,30);
}
void left_leg(){
    line(300,500,300,560);
    line(335,500,335,560);
    circle(318,586,30);

}
void right_leg(){
    line(460,500,460,560);
    line(495,500,495,560);
    circle(478,586,30);
}
