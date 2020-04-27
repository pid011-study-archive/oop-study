/*
(1) 소문자 b의 ASCII 코드값을 출력하시오.
(2) ASCII 코드값 90에 해당하는 문자를 출력하시오.
(3) 알파벳 ‘H’ 다음 문자를 출력하는 프로그램을 작성하시오.
(4) 알파벳 ‘p’를 대문자로 변환하는 프로그램을 작성하시오.
*/

#include <iostream>

using namespace std;

int main()
{
    // 1
    cout << (int)'b' << endl;
    // 2
    cout << (char)90 << endl;
    // 3
    cout << (char)((int)'H' + 1) << endl;
    // 4
    cout << (char)('p' - 32) << endl;

    return 0;
}