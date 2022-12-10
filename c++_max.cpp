#include <iostream>
using namespace std;

int Largenum(int x, int y, int z) 
{
	int max = x;
	if (y > max && y > z)
	{
		return max = y;
	else if(z>max && z>y)
	{
		return max = z;
	}
	else return max;
} 

int main()
{
	int a, b, c;
	cin >> a, b, c;
	cout << Largenum(a, b, c);
}
