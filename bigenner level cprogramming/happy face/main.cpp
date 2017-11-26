#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
    int midX,midY,leftEyeX,rightEyeX,eyeY,
    noseX,noseY,headRadius,eyeNoseRadius,smileRadius,stepX,stepY;
    initwindow(500,400,"Happy Face-press key to close");
    //draw head
    midX=getmaxx()/2;
    midY=getmaxy()/2;
    headRadius=getmaxy()/4;
    circle(midX,midY,headRadius);
    //draw eye
    stepX=headRadius/4;
    stepY=stepX;
    leftEyeX=midX-stepX;
    eyeY=midY-stepY;
    eyeNoseRadius=headRadius/10;
    circle(leftEyeX,eyeY,eyeNoseRadius);
    rightEyeX=midX+stepX;
    eyeY=midY-stepY;
    eyeNoseRadius=headRadius/10;
    circle(rightEyeX,eyeY,eyeNoseRadius);
    //draw nose
    noseX=midX;
    noseY=midY+stepY;
    circle(noseX,noseY,eyeNoseRadius);
    //draw smile
    smileRadius=(int)(0.75*headRadius+0.5);
    arc(midX,midY,210,330,smileRadius);
    getch();
    closegraph();
    return 0;
}
