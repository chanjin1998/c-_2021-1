#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

double tri2(double x1, double x2, double y1, double y2, double z1, double z2);
int main()
{
    double a1, a2, b1, b2, c1, c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    cout << tri2(a1, a2, b1, b2, c1, c2);
    
}

double tri2(double x1, double x2, double y1, double y2, double z1, double z2)
{
    if (sqrt((pow(x1 - y1, 2) + pow(x2 - y2, 2))) >= sqrt((pow(x1 - z1, 2) + pow(x2 - z2, 2))) + sqrt((pow(z1 - y1, 2) + pow(z2 - y2, 2))) || sqrt((pow(y1 - z1, 2) + pow(y2 - z2, 2))) >= sqrt((pow(x1 - y1, 2) + pow(x2 - y2, 2))) + sqrt((pow(x1 - z1, 2) + pow(x2 - z2, 2))) || sqrt((pow(x1 - z1, 2) + pow(x2 - z2, 2))) >= sqrt((pow(x1 - y1, 2) + pow(x2 - y2, 2))) + sqrt((pow(z1 - y1, 2) + pow(z2 - y2, 2))))
        return 0;
    else if ((pow(x1 - y1, 2) + pow(x2 - y2, 2)) == (pow(x1 - z1, 2) + pow(x2 - z2, 2)) + (pow(z1 - y1, 2) + pow(z2 - y2, 2)) || (pow(y1 - z1, 2) + pow(y2 - z2, 2)) == (pow(x1 - y1, 2) + pow(x2 - y2, 2)) + (pow(x1 - z1, 2) + pow(x2 - z2, 2)) || (pow(x1 - z1, 2) + pow(x2 - z2, 2)) == (pow(x1 - y1, 2) + pow(x2 - y2, 2)) + (pow(z1 - y1, 2) + pow(z2 - y2, 2)))
        return 1;
    else if ((pow(x1 - y1, 2) + pow(x2 - y2, 2)) > (pow(x1 - z1, 2) + pow(x2 - z2, 2)) + (pow(z1 - y1, 2) + pow(z2 - y2, 2)) || (pow(y1 - z1, 2) + pow(y2 - z2, 2)) > (pow(x1 - y1, 2) + pow(x2 - y2, 2)) + (pow(x1 - z1, 2) + pow(x2 - z2, 2)) || (pow(x1 - z1, 2) + pow(x2 - z2, 2)) > (pow(x1 - y1, 2) + pow(x2 - y2, 2)) + (pow(z1 - y1, 2) + pow(z2 - y2, 2)))
        return 2;
    else if ((pow(x1 - y1, 2) + pow(x2 - y2, 2)) < (pow(x1 - z1, 2) + pow(x2 - z2, 2)) + (pow(z1 - y1, 2) + pow(z2 - y2, 2)) || (pow(y1 - z1, 2) + pow(y2 - z2, 2)) < (pow(x1 - y1, 2) + pow(x2 - y2, 2)) + (pow(x1 - z1, 2) + pow(x2 - z2, 2)) || (pow(x1 - z1, 2) + pow(x2 - z2, 2)) < (pow(x1 - y1, 2) + pow(x2 - y2, 2)) + (pow(z1 - y1, 2) + pow(z2 - y2, 2)))
        return 3;
    else 
        return 0;
}

