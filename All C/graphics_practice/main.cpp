#include <graphics.h>

int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    setcolor(2);
    circle(120,100,80);
    setcolor(3);
    rectangle(400,50,600,150);
    setcolor(4);
    line(50,300,120,600);
    setcolor(5);
    ellipse(320,240,0,360,80,200);
    getch();
    closegraph();
    return 0;
}
