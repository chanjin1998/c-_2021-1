#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mid = n / 2;
    int l = mid;
    int o = mid;
    int m = 1;
    for (int i = 0; i < mid; i++)
    {
        for (int j = mid-i; j > 0; j--)
            cout << "*";
        for (int k = 0; k < n-l*2; k++)
            cout << "+";
        l--;
        for (int j = mid-i; j > 0; j--)
            cout << "*";
        cout << endl;
    }
    for (int i = 0; i < n; i++)
        cout << "+";
    cout << endl;
    for (int i = 0; i < mid; i++)
    {
        for (int j = 0; j < m; j++)
            cout << "*";
        for (int k = n - m * 2;k>0; k--)
            cout << "+";
        
        for (int j = 0; j < m; j++)
            cout << "*";
        m++;
        cout << endl;
    }
}


