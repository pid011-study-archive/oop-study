/*
short형에서 오버플로우가 발생하는 순간을 찾는 프로그램을 작성하라.
    - short형 변수를 선언하고 0으로 초기화한 후 계속 1씩 증가시킨다.
    - 변수값은 같은 줄에 계속 출력되도록 하고 오버플로우가 발생하면
    비프음을 울리고, 다음줄에 그 값을 출력한다.
*/

#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    short number = 0;

    while (true)
    {
        number++;
        cout << number << '\r';

        // overflow 발생
        if (number < 0)
        {
            Beep(392, 1000);
            cout << '\n' << number << '\n';
            break;
        }
    }
}