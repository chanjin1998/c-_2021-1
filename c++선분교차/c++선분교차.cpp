#include <iostream>
#include<algorithm>
using namespace std;

int row(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4);
int row_Inverse(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4);

int main()
{
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if (x1 == x2)
        cout << row(x1, x2, x3, x4, y1, y2, y3, y4);
    else if (y1 == y2)
        cout << row_Inverse(x1, x2, x3, x4, y1, y2, y3, y4);
}

int row(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4)
{
    int arr[2] = { x3, x4 };
    sort(arr, arr + 2);
    x3 = arr[0];
    x4 = arr[1];
    int arr1[2] = { y1, y2 };
    sort(arr1, arr1 + 2);
    y1 = arr1[0];
    y2 = arr1[1];
    if ((x1<x3) || (x1>x4) || (y1 > y3) || (y2 < y3))
        return 0;
    else if (((x1 == x3) && (y1 <= y3)) || ((x1 == x3) && (y2 >= y3)))
        return 2;
    else if (((x1 == x4) && (y1 <= y3)) || ((x1 == x4) && (y2 >= y3)))
        return 2;
    else if (((y3 == y1) && (x3 <= x1)) || ((y3 == y1) && (x4 >= x1)))
        return 2;
    else if (((y3 == y2) && (x3 <= x1)) || ((y3 == y2) && (x4 >= x1)))
        return 2;
    else
        return 1;
}

int row_Inverse(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4)
{
    int arr[2] = { x1, x2 };
    sort(arr, arr + 2);
    x1 = arr[0];
    x2 = arr[1];
    int arr1[2] = { y3, y4 };
    sort(arr1, arr1 + 2);
    y3 = arr1[0];
    y4 = arr1[1];
    if ((x3 < x1) || (x3 > x2) || (y3 > y1) || (y4 < y1))
        return 0;
    else if (((x3 == x1) && (y3 <= y1)) || ((x3 == x1) && (y4 >= y1)))
        return 2;
    else if (((x3 == x2) && (y3 <= y1)) || ((x3 == x2) && (y4 >= y1)))
        return 2;
    else if (((y1 == y3) && (x1 <= x3)) || ((y1 == y3) && (x2 >= x3)))
        return 2;
    else if (((y1 == y4) && (x1 <= x3)) || ((y1 == y4) && (x2 >= x3)))
        return 2;
    else
        return 1;
}