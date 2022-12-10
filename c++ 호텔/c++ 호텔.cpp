#include <iostream>

using namespace std;

int main(void) {
    int h, w, n;
    cin >> h >> w >> n;
    int front, last;
    front = n % h;
    last = (n / h) + 1;
    if (last < 10) {
        cout << front << 0 << last;
    }
    else if (last >= 10) {
        cout << front << last;
    }
    return 0;
}