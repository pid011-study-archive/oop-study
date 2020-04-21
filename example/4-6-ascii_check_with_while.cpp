/*
한 개의 문자가 입력되면 문자의 아스키코드값을 출력하고, 문자 외
의 다른 기호나 숫자가 입력되면 종료하는 프로그램
*/

#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        char input;
        cin >> input;
        if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
        {
            cout << (int)input << '\n';
        }
        else
        {
            break;
        }
    }
}