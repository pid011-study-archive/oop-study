/*
9부터 0까지 차례로 1씩 감소하되, 각 정수의 수만큼 해당 숫자를 출력하시오.

9999999999
888888888
77777777
6666666
555555
44444
3333
222
11
0
*/

#include <iostream>

using namespace std;

int main()
{
    for (int i = 9; i >= 0; i--)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i;
        }
        cout << '\n';
    }
}
