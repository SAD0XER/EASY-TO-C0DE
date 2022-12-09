#include <conio.h>
#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;
class Circle
{
    float x, y, a, b, r, p;

public:
    void get();
    void cal();
};
int main(){
    Circle C;
    C.get();
    C.cal();
    getch();
    return 0;
}
void Circle ::get(){
    cout <<"Enter centre and Radius :";
    cout <<"Enter a and b";
    cin >> a >> b;
    cout << endl<<"Enter R : ";
    cin >> r;
}
void Circle::cal(){
    int gdriver = DETECT, gmode, error;
    int midx, midy, i;
    initgraph(&gdriver, &gmode,"c:\\TURBOC3\\BGI");
    int errorcode = graphresult();
    int grOK;
    if (errorcode != grOK)
    {
        printf("Graphics error: %s\n", grapherrormsg(errorcode));
        printf("press any key to Hold");
        getch();
        exit(1);
    }
}