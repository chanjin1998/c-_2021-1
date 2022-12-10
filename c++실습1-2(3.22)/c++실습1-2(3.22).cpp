
#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int a = 1;
	for (int i = 0; i < x; i++)
	{
		for (int k = 0; k <= i; k++)
		{
			cout << a;
			a++;
		}
		cout << endl;
	}
	
}
