/*
10���� int�� �迭�� �����޸� �Ҵ��ϰ� ������ 1~10������ ���� �����Ͻÿ�.
*/

#include <iostream>

using namespace std;

int main()
{
    const int length = 10;
    int* a = new int[length];
    for (int i = 1; i <= length; i++)
    {
        a[i - 1] = i;
    }

    delete[] a;

    return 0;
}
