#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector <int> a;
	a = { 1,2,3,4,5 };
	a.erase(a.begin() + 1);
	a.erase(a.begin() + 1);
	for (int i = 0; i < a.size(); i++)
		cout << a[i];
}

