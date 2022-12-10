// ex)과제 3 연습.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
int main()
{
    int number, size;
    int lst[10] = { 0 };

    ifstream infile("lab3.txt");
    size = 0;

    while (infile >> number) {
        lst[size++] = number;
    }
    for (int i = 0; i < size; i++)
    {
        cout << lst[i] << endl;
    }
}

