#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    char input;
    while (true)
    {
        cout << "문자를 입력하세요 : ";
        cin >> input;

        cout << ">> ";

        if (input == '0')
        {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }
        else if (input >= 'a' && input <= 'z')
        {
            input -= 32;
            cout << input;
        }
        else if (input >= 'A' && input <= 'Z')
        {
            input += 32;
            cout << input;
        }
        else
        {
            cout << "알파벳이 아닙니다.";
        }

        cout << endl;
    }
}
