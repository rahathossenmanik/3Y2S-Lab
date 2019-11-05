#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");
   line(100, 300, 300, 300);
   line(300, 300, 300, 100);
   line(300, 100, 100, 100);
   line(100, 100, 100, 300);
   getch();
   closegraph();
   return 0;
}
