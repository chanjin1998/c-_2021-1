#include <iostream>
#include <cmath>
using namespace std;
enum COMPLEX_PART { RE, IM };

class Complex {
    double re, im;
    double norm() const { return sqrt(re * re + im * im); }
public:
    Complex(double re = 0, double im = 0) : re(re), im(im) {}
    Complex(const Complex& c) { re = c.re; im = c.im; }
    Complex& operator=(const Complex& c);
    Complex operator-();
    Complex operator~();
    Complex& operator++();
    Complex operator++(int);
    Complex& operator--();
    Complex operator--(int);
    Complex& operator+=(const Complex& c);
    Complex& operator-=(const Complex& c);
    Complex& operator*=(const Complex& c);

    double& operator[](COMPLEX_PART idx);
    const double& operator[](COMPLEX_PART idx) const;

    friend bool operator==(const Complex& c1, const Complex& c2);
    friend bool operator<(const Complex& c1, const Complex& c2);

    friend ostream& operator<< (ostream& os, const Complex& c);
    friend istream& operator>> (istream& is, Complex& c);
};

istream& operator>> (istream& is, Complex& c) {
    is >> c.re >> c.im;
    return is;
}
ostream& operator<< (ostream& os, const Complex& c) {
    os << c.re << ((c.im >= 0.0) ? '+' : '-') << abs(c.im) << "i ";
    return os;
}

Complex& Complex::operator=(const Complex& c) {
    re = c.re;
    im = c.im;
    return *this;
}
Complex& Complex::operator++() {
    re += 1;
    return *this;
}
Complex& Complex::operator--() {
    re -= 1;
    return *this;
}
Complex& Complex::operator+=(const Complex& c) {
    re += c.re;
    im += c.im;
    return *this;
}
Complex& Complex::operator-=(const Complex& c) {
    re -= c.re;
    im -= c.im;
    return *this;
}
Complex& Complex::operator*=(const Complex& c) {
    double A = re;
    double B = im;
    double C = c.re;
    double D = c.im;
    double F = A * C - B * D;
    double S = A * D + B * C;
    re = F;
    im = S;
    return *this;
}

Complex Complex::operator-() {
    Complex a(-re, -im);
    return a;
}
Complex Complex::operator~() {
    Complex a(re, -im);
    return a;
}
Complex Complex::operator++(int) {
    Complex temp(*this);
    operator++();
    return temp;
}
Complex Complex::operator--(int) {
    Complex temp(*this);
    operator--();
    return temp;
}

double& Complex::operator[](COMPLEX_PART idx) {
    if (idx == 0) return re;
    else return im;
}
const double& Complex::operator[](COMPLEX_PART idx) const {
    if (idx == 0) return re;
    else return im;
}

bool operator==(const Complex& c1, const Complex& c2) {
    return((c1.re == c2.re) && (c1.im == c2.im));
}
bool operator<(const Complex& c1, const Complex& c2) {
    return(c1.norm() < c2.norm());
}

Complex operator+(Complex lhs, const Complex& c) {
    lhs += c;
    return lhs;
}
Complex operator-(Complex lhs, const Complex& c) {
    lhs -= c;
    return lhs;
}
Complex operator*(Complex lhs, const Complex& c) {
    lhs *= c;
    return lhs;
}

bool operator!=(const Complex& c1, const Complex& c2) {
    return !(c1 == c2);
}
bool operator>(const Complex& c1, const Complex& c2) {
    return(c2 < c1);
}
bool operator<=(const Complex& c1, const Complex& c2) {
    return !(c1 > c2);
}
bool operator>=(const Complex& c1, const Complex& c2) {
    return !(c1 < c2);
}


int main(void) {
    Complex c1, c2, c3, c4;
    Complex c5, c6, c7, c8, c9;
    cin >> c1 >> c2 >> c3 >> c4;

    cout << c1 << " " << c2 << " " << c3 << " " << c4 << endl;
    cout << (2 + c1 + 3) + (2 - c2 - 3) * (2 * c3 * 3) - (2 * c4 - 3) << endl;

    c5 = c6 = c7 = c8 = c1;
    cout << (c5 == c2) << " " << (c5 != c2) << endl;
    cout << (c5 > c2) << " " << (c5 >= c2) << " " << (c5 < c2) << " " << (c5 <= c2) << endl;
    cout << (c5 == c6) << " " << (c5 != c6) << endl;
    cout << (c5 > c6) << " " << (c5 >= c6) << " " << (c5 < c6) << " " << (c5 <= c6) << endl;
    c5 += c2;
    c6 -= c3;
    c7 *= c4;
    c8 = c2[RE];
    c9 = c3[IM];
    cout << c5 << " " << c6 << " " << c7 << " " << c8 << " " << c9 << endl;

    c7 = -c6;
    c8 = (++c7) * 2;
    c9 = 2 * (c7++);
    cout << c7 << " " << c8 << " " << c9 << endl;

    c7 = ~c6;
    c8 = (++c7) * 2;
    c9 = 2 * (c7++);
    cout << c7 << " " << c8 << " " << c9 << endl;
}