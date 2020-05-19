/*
다음과 같은 결과가 출력되도록 프로그램하시오.

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include <iostream>

using namespace std;

string makeLine(int max, int i)
{
    string line = "";

    if (i % 2 != 0)
    {
        int pad_left = (max - i) / 2;
        for (int j = 0; j < pad_left; j++)
        {
            line += ' ';
        }
        for (int j = 0; j < i; j++)
        {
            line += '*';
        }
        line += '\n';
    }

    return line;
}

int main()
{
    int max;
    cin >> max;
    // max = 9;

    if (max < 1)
    {
        return 0;
    }

    // 최대 숫자가 짝수일 경우 마름모꼴이 제대로 나오지 않으므로 홀수로 만든다
    if (max % 2 == 0)
    {
        max -= 1;
    }

    for (int i = 1; i <= max; i++)
    {
        cout << makeLine(max, i);
    }
    for (int i = max - 1; i >= 1; i--)
    {
        cout << makeLine(max, i);
    }
}
