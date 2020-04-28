/*
알파벳 A부터 Z까지 출력하는 프로그램
*/

#include <iostream>

using namespace std;

int main()
{
    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        cout << ch;
        char split = ch != 'Z' ? ' ' : '\n';
        cout << split;
    }
}
