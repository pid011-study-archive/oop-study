/*
영어단어를 입력받고 단어의 문자 중 아스키 코드값이 가장 큰 문자를 찾아서
출력하는 프로그램을 작성하시오.
예시 : LOVE가 입력될 경우 V가 출력
*/

#include <iostream>

using namespace std;

int main()
{
    char str[100];
    cin >> str;
    char big_ascii = 'A';
    for (int i = 0; i < sizeof(str) / sizeof(char); i++)
    {
        if (str[i] == '\0') break;
        if (big_ascii < str[i]) big_ascii = str[i];
    }

    cout << big_ascii << endl;
}
