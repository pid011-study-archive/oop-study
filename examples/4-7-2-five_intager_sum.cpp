/*
사용자로부터 총 5개의 정수를 입력받아서, 그 수의 합을 출력하시오.
단, 정수는 반드시 1이상이어야 한다. 만일 1 미만의 수가 입력되면
입력으로 인정하지 않고 재입력을 요구해야 한다. 그래서 1이상의 정수
5개를 모두 입력받을 수 있어야 한다.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e = 0;
    while (true)
    {
        cin >> a >> b >> c >> d >> e;
        if (a < 1 || b < 1 || c < 1 || d < 1 || e < 1)
        {
            cout << "다시 입력해주세요.\n";
        }
        else
        {
            break;
        }
    }

    cout << a + b + c + d + e << '\n';
}