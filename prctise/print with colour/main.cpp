
#include<graphics.h>
#include<conio.h>

main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   setcolor(BLUE); // You can enter "1" instead of "BLUE" to get the same color, but this is not as readable
}
