#include <iostream>
#include <cstring>
#include <cassert>
using namespace std;

class Kvecter {
    int* m;
    int len;
public:
    Kvecter(int sz = 0, int value = 0);
    Kvecter(const Kvecter& v);
    ~Kvecter() {
        cout << this << " :  ~Kvecter() \n";
        delete[] m;
    }
    
    
    void clear() {
        delete[] m;
        m = nullptr;
        len = 0;
    }
    void print() const {
        for (int i = 0; i < len; i++) cout << m[i] << " ";
        cout << endl;
    }
    Kvecter& operator=(const Kvecter& s);
    int& operator[](int idx) { return m[idx]; }
    const int& operator[](int idx)const { return m[idx]; }
    friend bool operator==(const Kvecter& oth, const Kvecter& oth1);
    friend bool operator!=(const Kvecter& oth, const Kvecter& oth1);
    friend ostream& operator<<(ostream& os, const Kvecter& oth);
};

Kvecter& Kvecter::operator=(const Kvecter& s) {
    delete[] m;
    len = s.len;
    m = new int[len];
    for (int i = 0; i < len; i++) m[i] = s.m[i];
    return *this;
}
bool operator==(const Kvecter& oth, const Kvecter& oth1) {
    if (oth.len != oth1.len) return false;
    for (int i = 0; i < oth.len; i++)
        if (oth.m[i] != oth1.m[i]) return false;
    return true;
}
bool operator!=(const Kvecter& oth, const Kvecter& oth1) {
    return !(oth == oth1);
}
ostream& operator<<(ostream& os, const Kvecter& oth) {
    for (int i = 0; i < oth.len; i++) os << oth.m[i] << " ";
    return os;
}

Kvecter::Kvecter(int sz, int value) {
    len = sz;
    m = new int[len];
    for (int i = 0; i < len; i++) m[i] = value;
    if (!sz) m = NULL;
    cout << this << " : Kvecter(" << len << ", " << value << ")\n";
}
Kvecter::Kvecter(const Kvecter& v) {
    len = v.len;
    m = new int[len];
    copy(v.m, v.m + len, m);
    cout << this << " : Kvecter(*" << &v << ")\n";
}

int main() {
    cout << endl;
    Kvecter v1(3); v1.print();
    Kvecter v2(2, 9); v2.print();
    Kvecter v3(v2); v3.print();
    cout << (v1 == v2) << endl;
    cout << (v3 == v2) << endl;
    v3 = v2 = v1;
    cout << v1 << endl;
    cout << v2 << endl;
    cout << v3 << endl;
    cout << (v3 != v2) << endl;
    v1[2] = 2;
    v2[0] = v1[2];
    cout << "v1: " << v1 << "v2: " << v2 << "v3: " << v3 << endl;
    return 0;
}