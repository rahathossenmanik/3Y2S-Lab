#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");
   line(100, 200, 500, 200);
   line(300, 050, 500, 200);
   line(300, 050, 100, 200);

   line(125, 200, 475, 200);
   line(475, 200, 475, 400);
   line(475, 400, 125, 400);
   line(125, 400, 125, 200);

   line(250, 250, 250, 400);
   line(300, 250, 300, 400);
   line(350, 250, 350, 400);
   line(250, 250, 350, 250);

   getch();
   closegraph();
   return 0;
}

