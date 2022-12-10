#include <iostream>
using namespace std;

int tri(int a, int b, int c);
int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    
    cout << tri(a, b, c);

}

int tri(int x, int y, int z)
{
    if (x >= y + z || y >= x + z || z >= x + y)
        return 0;
    else if (pow(x,2) == pow(y,2) + pow(z,2) || pow(y,2) == pow(x,2) + pow(z,2) || pow(z,2) == pow(x,2) + pow(y,2))
        return 2;
    else if (x == y && y == z && x == z)
        return 1;
    else if (x == y || x == z || y == z)
        return 3;
    else
        return 4;
}
