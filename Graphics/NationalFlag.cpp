#include <graphics.h>
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(100, 100, 500, 340);
    floodfill(300, 220, WHITE);
    setfillstyle(SOLID_FILL,RED);
    circle(300, 220, 80);
    floodfill(300, 220, WHITE);
    getch();
    closegraph();
    return 0;
}
