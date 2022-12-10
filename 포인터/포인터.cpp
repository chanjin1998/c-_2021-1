#include <iostream>
using namespace std;

class A {
	int p;
public:
	A() {
		cout << "A() called\n";
		p = 1;
	}
	A(int v) {
		cout << "A(int) called\n";
		p = v;
	}
	int getP() {
		return p;
	}
	void setP(int v) {
		p = (v < 0) ? 0 : v;
	}
	~A() {
		cout << "A() closed\n";
	}
	
};

int main()
{
	A a1, a2(10);
	cout << a1.getP() << endl;
	cout << a2.getP() << endl;
	return 0;
}