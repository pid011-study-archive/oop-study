/*
사용자가 입력하는 정수를 계속해서 더해나가는 프로그램을 작성하시오.
0이 입력되면 덧셈결과를 출력하고 프로그램을 종료하시오.
*/

#include <iostream>

using namespace std;

int main()
{
    int input = 0, sum = 0;
    do
    {
        cin >> input;
        sum += input;
    } while (input != 0);

    cout << sum << '\n';
}
