//소수 판별//
#include <iostream>
using namespace std;

int primeNum(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}



int main()
{
    int a;
    cin >> a;
    if (primeNum(a) == true) cout << "소수가 아닙니다.";
    else cout << "소수입니다.";
}

/*#include <iostream>
using namespace std;

int main()
{
    int sta, room, cli;
    cin >> sta >> room >> cli;
}

int hotel(int sta, int room, int cli)
{
    int arr[sta][room];
}*/