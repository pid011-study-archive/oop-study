/*
세 개의 정수를 키보드에서 입력받아 최대값과 최소값을 구하는 프로그램
을 출력하시오.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int max, min;

    max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    min = a < b ? (a < c ? a : c) : (b < c ? b : c);

    cout << "max: " << max << '\n';
    cout << "min: " << min << '\n';
}