/*
사칙연산 중 하나와 두 개의 숫자를 입력받아 연산 결과를 출력하는 프로그램
*/

#include <iostream>

using namespace std;

int main()
{
    double x, y;
    char symbol;
    cin >> x >> symbol >> y;

    switch (symbol)
    {
    case '+':
        cout << x + y;
        break;
    case '-':
        cout << x - y;
        break;
    case '*':
        cout << x * y;
        break;
    case '/':
        cout << x / y;
        break;
    default:
        cout << "잘못된 기호입니다.";
        break;
    }
    cout << '\n';
}