#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int n;
	int m;
	cin >> a >> b;
	int arr1[100][100] = {0, };
	int arr2[100][100] = {0, };
	int sum[100][100] = {0, };
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			
			cin >> n;
			arr1[i][j] = n;
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			
			cin >> m;
			arr2[i][j] = m;
			
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}

}