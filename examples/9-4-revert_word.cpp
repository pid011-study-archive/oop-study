/*
영어 단어를 입력받아 char형 배열에 저장하고, 배열에 저장된 단어를 역순으
로 뒤집어 출력하는 프로그램을 작성하시오.(null문자의 위치는 변경되면 안
된다.)
*/

#include <iostream>

using namespace std;

int main()
{
    char str[100];
    cin >> str;
    int length = 0;
    for (int i = 0; i < sizeof(str) / sizeof(char); i++)
    {
        if (str[i] == '\0') break;
        length++;
    }
    int j = length - 1;
    for (int i = 0; i < length / 2; i++)
    {
        char tmp = str[i];
        str[i] = str[j - i];
        str[j - i] = tmp;
    }

    cout << str << endl;
}
