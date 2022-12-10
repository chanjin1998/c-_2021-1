// ex)1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int fivonacci(int n)
{
	if (n == 0 || n == 1) return n;
	else return (fivonacci (n-1) + fivonacci(n - 2));
}

int main()
{
	int a;
	cin >> a;
	cout << fivonacci(a);
}
