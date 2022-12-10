// sland.실습(3.23).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
    time_t t = time(NULL);
    for (int i = 0; i < 10; i++)
    {
        srand(t);
        t = t + 1;
        int dice = rand() % 6 + 1;
        cout << dice << " ";
    }


}

