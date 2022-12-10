#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int a;
	vector <int> inter;
	vector <int> uni;
	vector <int> differ;
	cin >> a;
	vector <int> v1;
	for (int i = 0; i < a; i++)
	{
		int n;
		cin >> n;
		v1.push_back(n);
	}
	int b;
	cin >> b;
	vector <int> v2;
	for (int j = 0; j < b; j++)
	{
		int s;
		cin >> s;
		v2.push_back(s);
	}
	int c = 0;
	for (int i = 0; i < a; i++)//교집합 구하기
	{
		for (int j = 0; j < b; j++)
		{
			if (v1[i] == v2[j])
			{
				inter.push_back(v1[i]);
				c++;
			}
		}
	}
	
	cout << c << " ";

	for (int i = 0; i < c; i++)
		cout << inter[i] << " ";
	cout << endl;
	for (int i = 0; i < a; i++)
	{
		uni.push_back(v1[i]);
	}
	for (int i = 0; i < b; i++)
	{
		uni.push_back(v2[i]);
	}
	sort(uni.begin(), uni.end());
	int len = uni.size();
	uni.erase(unique(uni.begin(), uni.end()), uni.end());
	cout << uni.size() << " ";
	for (int i = 0; i < uni.size(); i++)
		cout << uni[i] << " ";
	cout << endl;
	for (int i = 0; i < v1.size(); i++)
	{
		for (int j = 0; j < inter.size(); j++)
		{
			if (v1[i] == inter[j])
			{
				v1.erase(v1.begin()+i);
				
			}
		}
	}
	sort(v1.begin(), v1.end());
	cout << v1.size() << " ";
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
}