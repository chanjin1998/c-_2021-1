// c++실습1-1(3.22).cpp//


#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int subs = 0;
	int max = 0;
	int same = 0;
	cin >> a;
	cin >> b;
	if (a - b < 0)
		subs = b - a;
	else
		subs = a - b;
	if (a - b >= 0)
		max = a;
	else
		max = b;
	if (a == b)
		same = 1;
	else
		same = 0;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << subs << endl;
	cout << a / b << endl;
	cout << a % b << endl;
	cout << max << endl;
	cout << same << endl;
}

// 합,차, 절댓값, 곱, 몫, 나머지, 큰수, 두수 같은지//