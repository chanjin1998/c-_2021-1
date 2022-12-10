#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b, n, w;
    cin >> a >> b >> n >> w;
    int count = 0;
    int sheep = 0;
    for (int i = 0; i <= n; i++)
    {
        if (w == a * i + b * (n - i))
        {
            count++;
            sheep = i;
        }
    }
    int lamb = n - sheep;
    if (count != 1)
        cout << -1;
    else if (sheep == n)
        cout << -1;
    else if (sheep == 0)
        cout<< -1;
    else
        cout << sheep << " " << lamb;
}   