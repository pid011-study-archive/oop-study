#include <iostream>

using namespace std;

void Fibonacci()
{
    cout << "보고싶은 피보나치 수열의 길이를 입력해주세요 : ";
    int n;
    cin >> n;
    if (n <= 0)
    {
        return;
    }

    cout << n << "개의 피보나치 수열을 출력합니다." << endl;

    if (n <= 2)
    {
        for (int i = 0; i < n; i++)
        {
            cout << i;
            cout << (i == n - 1 ? "\n" : ", ");
        }
        return;
    }

    unsigned long long previous1 = 0;
    unsigned long long previous2 = 1;
    unsigned long long current;
    cout << "0, 1, ";
    for (int i = 3; i <= n; i++)
    {
        current = previous1 + previous2;

        cout << current;
        previous1 = previous2;
        previous2 = current;

        cout << (i == n ? "\n" : ", ");
    }
}
