/*
3�� 9���� int�� �迭�� �����Ͽ� ������ �� 2��, 3��, 4���� �����ϰ�
����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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
