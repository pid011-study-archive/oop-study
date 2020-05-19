/*
사용자로부터 양의 정수를 하나 입력받은 다음, 그 수만큼 3의 배수를 출력하시오.
예를 들어, 5를 입력받았다면, 3 6 9 12 15를 출력해야 한다.
*/

#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;

    int i = 0, count = 1;
    while (i < input)
    {
        if (count % 3 == 0)
        {
            cout << count << ' ';
            i++;
        }
        count++;
    }
    cout << '\n';
}