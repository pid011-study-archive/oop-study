/*
const int num = 12;
������ ������ �����ؼ� �� ������ ����Ű���� �Ѵ�.
�׸��� �� ������ ������ �����ϴ� �����ڸ� �ϳ� �����Ѵ�.
�̷��� ����� ������ ������ �����ڸ� �̿��� num�� ����� ���� ����Ѵ�.
*/

#include <iostream>

using namespace std;

int main()
{
    const int num = 12;
    const int* pt = &num;
    const int& ref_num = *pt;
    cout << *pt << endl;
    cout << ref_num << endl;
}
