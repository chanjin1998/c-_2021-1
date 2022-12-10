// ex)any.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
void f(void);

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        f();
        cout << endl;
    }
}

void f(void)
{
    for (int i = 0; i < 10; i++)
        cout << "#";
}