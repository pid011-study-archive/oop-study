#include <iostream>
#include <string>
#include "myfunc.h"

using namespace std;

int main()
{
    cout << "무엇을 원하십니까" << endl;
    cout << endl;
    cout << "0. 나가기" << endl;
    cout << "1. 제곱 계산 (n^k)" << endl;
    cout << "2. n까지의 소수 찾기" << endl;
    cout << "3. n개의 피보나치 수열" << endl;

    string choose;
    while (true)
    {
        cout << endl;
        cout << "번호 입력 : ";

        int choose_number = 0;
        cin >> choose_number;
        cout << endl;
        if (cin.fail())
        {
            cout << "숫자로 입력해주세요." << endl;
            cin.clear();
            cin.ignore(100, '\n');
            continue;
        }

        switch (choose_number)
        {
        case 0:
            break;
        case 1:
            Power();
            break;
        case 2:
            PrimeNumber();
            break;
        case 3:
            Fibonacci();
            break;
        default:
            cout << "잘못된 번호입니다." << endl;
            continue;
        }

        break;
    }
}
