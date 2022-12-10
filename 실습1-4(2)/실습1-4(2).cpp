// live-acti(3.18)//
#include<iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    int x = 1;
    

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n - x; j++)
        {
            if (j == n / 2) cout << "I";
            else cout << ".";
        }
        cout << "*";
        x++;
        
        for (int k = 0; k < x - 2; k++)
        {
            cout << ".";
        }
        cout << endl;
    }
    for (int o = 0; o < n; o++)
    {
        if (o == n / 2) cout << "0";
        else cout << "+";
    }
    cout << endl;
    
    for (int i = 0; i < n / 2; i++)
    {
        for (int i = 0; i < x-2; i++)
        {
            cout << ".";
        }
        cout << "*";
        x--;
        for (int i = 0; i < n / 2 - x; i++)
            cout << ".";
        for (int i = 0; i < n/2+1; i++)
        {
            if (i == 0) cout << "I";
            else cout << ".";
        }
        cout << endl;
    }
    return 0;
}