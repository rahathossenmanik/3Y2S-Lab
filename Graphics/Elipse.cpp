#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");
   ellipse(300, 200, 0, 360, 200, 100);
   getch();
   closegraph();
   return 0;
}
