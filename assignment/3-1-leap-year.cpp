/*
(1) 연도를 입력하면 윤년인지를 판단하여 알려주는 프로그램을 작성하라.
윤년의 기준
- 연도가 4로 나누어 떨어진다.
- 100으로 나누어 떨어지는 연도는 제외한다.
- 400으로 나누어 떨어지는 연도는 윤년이다.
*/

#include <iostream>

using namespace std;

int main()
{
    int year;
    cin >> year;

    if (((year % 4 == 0) && (year % 400 == 0)) || ((year % 4 == 0) && (year % 100 != 0)))
    {
        cout << "윤년입니다.";
    }
    else
    {
        cout << "평년입니다.";
    }
}