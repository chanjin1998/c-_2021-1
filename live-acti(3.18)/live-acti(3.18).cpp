// live-acti(3.18)//
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 1;
    /*for (int j = 0; j < n; j++) {
        for (int k = 0; k < x; k++) cout << "-"; 

        for (int k = 0; k < (n - x * 2); k++) {
            if (k % 2 == 0) cout << "*";
            else cout << "+";
        }
        for (int k = 0; k < x; k++) cout << "-";

        if (j < n / 2) x++;
        else x--;
        cout << endl;*/
    for (int i =0;i<n/2;i++)
    {
        for (int j = 0; j < n-x; j++)
        {
            if (j == n / 2) cout << "I";
            else cout << ".";
        
            cout << "*";
            if(x<4) x++;
        }
        for (int k = 0; k < x - 1; k++)
        {
            cout << "." < endl;
        }
    }


    return 0;
}