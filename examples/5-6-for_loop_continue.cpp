/*
1~30 사이의 숫자 중 5를 제외한 5의 배수만 출력하도록
continue문을 사용하여 프로그램하시오.
*/

#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i < 31; ++i)
    {
        if (i == 5 || i % 5 != 0)
        {
            continue;
        }
        cout << i << '\n';
    }
}
