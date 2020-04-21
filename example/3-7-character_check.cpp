/*
단일문자를 입력받고, 입력받은 단일 문자가 알파벳 대문자인 경우,
"대문자입니다." 소문자일 경우 "소문자입니다."를 출력하고, 숫자인 경우에는
"숫자입니다." 그 외의 경우에는 "기타문자입니다."를 출력하는 프로그램을
작성하시오.
*/

#include <iostream>

using namespace std;

int main()
{
    char input;
    cin >> input;

    string output;
    if (input >= '0' && input <= '9')
    {
        output = "숫자입니다.";
    }
    else if (input >= 'A' && input <= 'Z')
    {
        output = "대문자입니다.";
    }
    else if (input >= 'a' && input <= 'z')
    {
        output = "소문자입니다.";
    }
    else
    {
        output = "기타문자입니다.";
    }

    cout << output << endl;
}