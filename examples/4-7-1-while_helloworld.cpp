/*
양의 정수를 입력받아, 그 수만큼 “Hello World”를 출력하시오
*/

#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;

    int i = 0;
    while (i < input)
    {
        cout << "Hello, World\n";
        i++;
    }
}