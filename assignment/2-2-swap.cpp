/*
키보드로부터 정수인 두 데이터를 입력받아
두 변수의 값을 교환하는 프로그램을 작성하라.

[output]
A값을 입력하세요 -> 10
B값을 입력하세요 -> 20
입력한 데이터: a=10이고, b=20이다.
데이터 교환  : a=20이고, b=10이다.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "A값을 입력하세요 -> ";
    cin >> a;
    cout << "B값을 입력하세요 -> ";
    cin >> b;
    cout << "입력한 데이터\t: "
         << "a=" << a << "이고, b=" << b << "이다.\n";

    int swap;
    swap = a;
    a = b;
    b = swap;

    cout << "데이터 교환\t: "
         << "a=" << a << "이고, b=" << b << "이다.\n";
}