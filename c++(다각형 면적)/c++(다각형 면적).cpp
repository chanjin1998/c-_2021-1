#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int xarray[n];
    int yarray[n];
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        xarray[i] = x;
        int y;
        cin >> y;
        yarray[i] = y;
    }
    int tot = 0;
    for (int k = 0; k < n; k++) {
        if (k == n - 1) {
            tot += (xarray[k] * yarray[0] - yarray[k] * xarray[0]);
            break;
        }
        tot += (xarray[k] * yarray[k + 1] - yarray[k] * xarray[k + 1]);

    }
    if (tot < 0) {
        cout << tot * (-1) << ' ' << -1;
    }
    else if (tot > 0) {
        cout << tot << ' ' << 1;
    }
    return 0;
}