/*
입력받은 정수가 5보다 크거나 같고 10미만일 경우 “참“, 그 외의 경우 “거짓＂을 출력하
는 프로그램을 작성하시오.
*/

#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;

    if (input >= 5 && input < 10)
    {
        cout << "참";
    }
    else
    {
        cout << "거짓";
    }
    cout << endl;
}