#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
using namespace std;
void happyNum(int n);
int main()
{
    int n;
    cin >> n;
    happyNum(n);

}

void happyNum(int n)
{
    int sum = 0;
    vector <int> a;
    while (n >= 10)
    {
        a.push_back(n % 10);
        n /= 10;

    }
    for (int i = 0; i < a.size(); i++)
    {
        sum += pow(a[i], 2);
    }

    n = pow(n, 2);
    sum = sum + n;
    if (sum == 1)  cout << "HAPPY";
    else if (sum < 10 && sum != 1) cout << "UNHAPPY";
    else happyNum(sum);

}