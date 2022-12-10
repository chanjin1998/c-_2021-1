#include <iostream>
#include <cmath>

using namespace std;
int primeNum(int n);
int main()
{
	int n;
	cin >> n;
	
	cout << primeNum(n);
}
int primeNum(int n)
{
	int max = 1;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		
	}
	return max;
}