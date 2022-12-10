#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void inter(vector <int> a, vector <int> b);
void uni(vector <int> a, vector <int> b);
void differ(vector <int> a, vector <int> b);
int main()
{
	int n;
	cin >> n;
	vector <int> a;
	for (int i = 0; i < n; i++)
	{
		int n1;
		cin >> n1;
		a.push_back(n1);
	}
	int m;
	cin >> m;
	vector <int> b;
	for (int j = 0; j < m; j++)
	{
		int n2;
		cin >> n2;
		b.push_back(n2);
	}
	inter(a,b);
	uni(a, b);
	differ(a, b);
}

void inter(vector <int> a, vector <int> b) 
{
	vector <int> c;
	int count = 0;
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < b.size(); j++)
		{
			if (a[i] == b[j]) 
			{
				c.push_back(a[i]);
				count++;
			}
		}
	}
	sort(c.begin(), c.end());
	cout << count << " ";
	for (int k = 0; k < c.size(); k++)
		cout << c[k] << " ";
	cout << endl;
}
void uni(vector <int> a, vector <int> b)
{
	vector <int> d;
	for (int i = 0; i < a.size(); i++)
	{
		d.push_back(a[i]);
	}
	for (int i = 0; i < b.size(); i++)
	{
		d.push_back(b[i]);
	}
	sort(d.begin(), d.end());
	d.erase(unique(d.begin(), d.end()), d.end());
	cout << d.size() << " ";
	for (int i = 0; i < d.size(); i++)
		cout << d[i] << " ";
	cout << endl;
}
void differ(vector <int> a, vector <int> b)
{
	vector <int> e(a);
	for (int i = 0; i < e.size(); i++)
	{
		for (int j = 0; j < a.size(); j++)
		{
			for (int k = 0; k < b.size(); k++)
			{
				if (e[i] == a[j] && e[i] == b[k])
					e.erase(e.begin() + i);
			}
		
		}
	}
	sort(e.begin(), e.end());
	cout << e.size() << " ";
	for (int i = 0; i < e.size(); i++)
		cout << e[i] << " ";
	
}