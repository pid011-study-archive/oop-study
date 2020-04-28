/*
구구단을 출력하되, 짝수 단(2단, 4단, 6단, 8단)만 출력하시오.
또한 2단은 2x2까지, 4단은 4x4까지, 6단은 6x6까지, 8단은 8x8까지만 출력하시오.
(continue와 break문 사용)
*/

#include <iostream>

using namespace std;

int main()
{
    for (int i = 2; i < 9; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }

        for (int j = 1; j < i + 1; j++)
        {
            if (j > i)
            {
                break;
            }

            cout << i << " * " << j << " = " << i * j << '\n';
        }

        if (i < 8)
        {
            cout << '\n';
        }
    }
}
