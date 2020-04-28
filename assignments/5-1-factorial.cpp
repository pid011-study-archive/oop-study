/*
n! 은 1부터 n까지의 정수를 곱하는 것이다.
n! = 1 x 2 x 3 x 4 x … x n
키보드로부터 n에 해당하는 정수를 입력받아 n!의 값을 구하라.(for문을 사용)
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int factorial = 1;
    for (int i = 2; i < n + 1; i++)
    {
        factorial *= i;
    }

    cout << n << "! = " << factorial << '\n';
}
