/*
�����ڸ� �̿��Ͽ� ���ڷ� ���޵� int�� ������ ���� 1�� ������Ű�� �Լ��� �����Ͻÿ�.
*/

#include <iostream>

using namespace std;

void sum(int &x)
{
    x++;
}

int main()
{
    int x = 0;
    for (int i = 0; i < 5; i++)
    {
        sum(x);
    }
    cout << x << endl;
}
