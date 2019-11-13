#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
    int gdrive = DETECT,gmode;
    initgraph(&gdrive,&gmode,"");
    int n=0;
    while(1){
        n++;
        putpixel(rand()%1400, rand()%900, rand()%20);
        delay(1);
        if(n>250000){
            cleardevice();
            n=0;
        }
    }
    getch();
    closegraph();

return 0;
}
