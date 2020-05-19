#include <iostream>

using namespace std;

void Fibonacci()
{
    cout << "������� �Ǻ���ġ ������ ���̸� �Է����ּ��� : ";
    int n;
    cin >> n;
    if (n <= 0)
    {
        return;
    }

    cout << n << "���� �Ǻ���ġ ������ ����մϴ�." << endl;

    if (n <= 2)
    {
        for (int i = 0; i < n; i++)
        {
            cout << i;
            cout << (i == n - 1 ? "\n" : ", ");
        }
        return;
    }

    unsigned long long previous1 = 0;
    unsigned long long previous2 = 1;
    unsigned long long current;
    cout << "0, 1, ";
    for (int i = 3; i <= n; i++)
    {
        current = previous1 + previous2;

        cout << current;
        previous1 = previous2;
        previous2 = current;

        cout << (i == n ? "\n" : ", ");
    }
}
