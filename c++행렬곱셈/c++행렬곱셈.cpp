#include <iostream>

using namespace std;

int main()
{
	int arr1[100][100] = { 0, };
	int arr2[100][100] = { 0, };
	int multi[100][100] = { 0, };
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			int n;
			cin >> n;
			arr1[i][j] = n;
		}
	}
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < c; j++)
		{
			int m;
			cin >> m;
			arr2[i][j] = m;
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < c; j++)
		{
			for (int k = 0; k < b; k++)
			{
				multi[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << multi[i][j] << " ";
		}
		cout << endl;
	}
}
