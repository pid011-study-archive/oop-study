/*
���ڷ� ���޵� int�� ������ ��ȣ�� �ٲٴ� �Լ��� �����Ͻÿ�
*/

#include <iostream>

using namespace std;

void change(int& x)
{
    x = -x;
}

int main()
{
    int x = 10;
    int y = -4;
    change(x), change(y);
    cout << x << endl;
    cout << y << endl;
}
