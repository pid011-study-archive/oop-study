/*
���̰� 5�� int �迭 arr�� �����ϰ� �̸� 1, 2, 3, 4, 5�� �ʱ�ȭ�� ����,
�� �迭�� ������ ��Ҹ� ����Ű�� ������ ���� ptr�� �����Ѵ�.
�� ���� ������ ���� ptr���� �̿��Ͽ� �迭�� ����� ��� ������ ���ϰ�
�� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#include <iostream>

using namespace std;

int main()
{
    const int len = 5;
    int arr[len] = { 1,2,3,4,5 };
    int* ptr = arr + len - 1;

    int sum = 0;
    for (int i = 1; i <= len; i++)
    {
        sum += *ptr;
        ptr--;
    }
    cout << sum << endl;
}
