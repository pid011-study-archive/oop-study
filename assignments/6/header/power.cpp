#include <iostream>
#include <cmath>

using namespace std;

void Power()
{
    cout << "제곱 계산을 할 수를 입력해주세요." << endl;
    cout << "예를 들어 2^3을 계산하고 싶으면 \"2 3\"처럼 입력해주세요." << endl;
    cout << "입력 : ";
    long long n, k;
    cin >> n >> k;

    double result = pow(n, k);
    cout << result << endl;
}
