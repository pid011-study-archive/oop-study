/*
���̰� 6�� int �迭 arr�� �����ϰ� �̸� 1, 2, 3, 4, 5, 6 ���� �ʱ�ȭ��
����, �迭�� ����� ���� ������ 6, 5, 4, 3, 2, 1�� �ǵ��� �����ϴ� ��
�α׷��� �ۼ��Ͻÿ�.
��, �迭�� �հ� �ڸ� ����Ű�� ������ ���� �� ���� �����ؼ� �̸� Ȱ
���Ͽ� ����� ���� ������ �ٲ�� �Ѵ�.
*/

#include <iostream>

using namespace std;

inline void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    const int len = 6;
    int arr[len] = { 1,2,3,4,5,6 };
    int* lptr = arr;
    int* rptr = arr + len - 1;
    for (int i = 0; i < len / 2; i++)
    {
        swap(lptr++, rptr--);
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << (i < len - 1 ? ' ' : '\n');
    }
}
