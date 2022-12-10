#include <iostream>
#include <cstdlib>
using namespace std;

int Tri(int ax, int ay, int bx, int by, int cx, int cy);
int Turn(int ax, int ay, int bx, int by, int cx, int cy);

int main()
{
    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    cout << Tri(ax, ay, bx, by, cx, cy)<< ' ';
    cout << Turn(ax, ay, bx, by, cx, cy);
}

int Tri(int ax, int ay, int bx, int by, int cx, int cy)
{
    int area = abs(((bx - ax) * (cy - ay) - (cx - ax) * (by - ay)));
    return area;
}

int Turn(int ax, int ay, int bx, int by, int cx, int cy)
{
    int area = ((bx - ax) * (cy - ay) - (cx - ax) * (by - ay));
    if (area < 0)
        return -1;
    else if (area > 0)
        return 1;
    else
        return 0;
}