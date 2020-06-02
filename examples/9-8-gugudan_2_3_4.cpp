/*
3행 9열인 int형 배열을 선언하여 구구단 중 2단, 3단, 4단을 저장하고
출력하는 프로그램을 작성하시오.
*/

#include <iostream>

using namespace std;

int main()
{
    const int x = 9;
    const int y = 3;
    int arr[y][x];

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            int a = i + 2;
            int b = j + 1;
            arr[i][j] = (i + 2) * (j + 1);
        }
    }

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            int a = i + 2;
            int b = j + 1;
            cout << a << "x" << b << "=";
            cout << arr[i][j] << (j < x - 1 ? "\t" : "\n");
        }
    }
}
