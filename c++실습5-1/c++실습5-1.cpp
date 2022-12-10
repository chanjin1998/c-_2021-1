#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void init_array(int a[], int n) {
    time_t t = time(NULL);
    srand(t);
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 10;
    }

}

int sum_array1(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int sum_array2(int a[], int n, int* p) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    *p = sum;
    return 0;
}

int sum_array3(int a[], int n, int& r) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    a[r] = sum;
    return 0;
}

int main(int argc, char* argv[]) {
    if (argc < 2) { cout << "one command line argument needed\n"; return -1; }

    int n = atoi(argv[1]);
    n = (n < 1) ? 1 : n;
    n = (n > 10) ? 10 : n;


    int* a = new int[n];
    if (!a) { cout << "allocation failed.\n"; return -1; }
    int s;

    init_array(a, n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";

    s = sum_array1(a, n);
    cout << endl << s << endl;

    sum_array2(a, n, a);
    cout << s << endl;


    sum_array3(a, n, *a);
    cout << s << endl;
    return 0;
}

