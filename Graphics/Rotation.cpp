#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int x1=100, x2=500, x3=300, y1=300, y2=300, y3=100;

void rotation(int x, int y){
    int ix1, ix2, ix3, iy1, iy2, iy3, temp;
    ix1=x1-x;
    ix2=x2-x;
    ix3=x3-x;
    iy1=y1-y;
    iy2=y2-y;
    iy3=y3-y;

/*    line(ix1, iy1, ix2, iy2);
    line(ix2, iy2, ix3, iy3);
    line(ix3, iy3, ix1, iy1);
*/
    temp=ix1;
    ix1=iy1;
    iy1=temp;
    temp=ix2;
    ix2=iy2;
    iy2=temp;
    temp=ix3;
    ix3=iy3;
    iy3=temp;

/*    line(ix1, iy1, ix2, iy2);
    line(ix2, iy2, ix3, iy3);
    line(ix3, iy3, ix1, iy1);
*/
    ix1=ix1+x;
    ix2=ix2+x;
    ix3=ix3+x;
    iy1=iy1+y;
    iy2=iy2+y;
    iy3=iy3+y;

    setcolor(RED);
    circle(x, y, 2);
    line(ix1, iy1, ix2, iy2);
    line(ix2, iy2, ix3, iy3);
    line(ix3, iy3, ix1, iy1);
}

int main() {
    int x, y;
    int gd = DETECT, gm, color;
    initgraph(&gd, &gm, "");

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    printf("Enter Rotation Point (x, y): ");
    scanf("%d %d", &x, &y);
    rotation(x, y);
    getch();
    closegraph();
    return 0;
}
