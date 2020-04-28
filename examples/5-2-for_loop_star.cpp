/*
입력한 숫자만큼 *를 출력하는 프로그램
*/

#include <iostream>

using namespace std;

int main()
{
    int length;
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cout << '*';
    }
    cout << '\n';
}
