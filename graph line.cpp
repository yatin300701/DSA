#include<stdio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT , gm;
    initgraph(&gd, &gm, "c:\\Dev-C++\\bgi");
    line(150,100,450,100);
	 getch();
	 closegraph();
}
