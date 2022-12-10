#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int idx = 0;
	int arr[1350] = { 0, };
	for (int i = 0; i <= 25; i++)
	{
		for (int j = 0; j <= 30; j++)
		{
			for (int k = 0; k <= 30; k++)
			{
				if (pow(2, k) * pow(3, j) * pow(5, i) <= 398580750) {
					arr[idx] = pow(2, k) * pow(3, j) * pow(5, i);
					idx++;
				}
			}
		}
	}
	sort(arr,arr+1350);
	cout << arr[n - 1];

}