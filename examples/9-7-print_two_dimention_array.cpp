/*
�����͸� 2���� �迭�� �ʱ�ȭ�ϰ� ȭ�鿡 ����Ͻÿ�
*/

#include <iostream>

using namespace std;

int main()
{
    const int x = 5;
    const int y = 3;
    int arr[y][x] =
    {
        {2,8,14,22,25},
        {4,10,16,20,24},
        {6,12,20,30,33}
    };

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << arr[i][j] << (j < x - 1 ? '\t' : '\n');
        }
    }
}
