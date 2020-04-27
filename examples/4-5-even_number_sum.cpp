/*
2+4+6+…100을 계산하는 프로그램
*/

#include <iostream>

using namespace std;

int main()
{
    int i = 2;
    int sum = 0;

    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }

    cout << sum << '\n';
}