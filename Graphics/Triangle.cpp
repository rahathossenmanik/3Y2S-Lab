#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");

   line(100, 300, 500, 300);
   line(300, 150, 500, 300);
   line(300, 150, 100, 300);

   getch();
   closegraph();
   return 0;
}
