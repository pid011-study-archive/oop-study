/*
두 개의 숫자를 입력받아 비트연산(AND, OR, XOR, NOT)의 결과를 출력
하시오.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a, b;
    cout << (int)(a & b) << endl;
    cout << (int)(a | b) << endl;
    cout << (int)(a ^ b) << endl;
    cout << (int)(~a) << endl;
    cout << (int)(~b) << endl;
}