#include <iostream>
#include <string>
#include "myfunc.h"

using namespace std;

int main()
{
    cout << "������ ���Ͻʴϱ�" << endl;
    cout << endl;
    cout << "0. ������" << endl;
    cout << "1. ���� ��� (n^k)" << endl;
    cout << "2. n������ �Ҽ� ã��" << endl;
    cout << "3. n���� �Ǻ���ġ ����" << endl;

    string choose;
    while (true)
    {
        cout << endl;
        cout << "��ȣ �Է� : ";

        int choose_number = 0;
        cin >> choose_number;
        cout << endl;
        if (cin.fail())
        {
            cout << "���ڷ� �Է����ּ���." << endl;
            cin.clear();
            cin.ignore(100, '\n');
            continue;
        }

        switch (choose_number)
        {
        case 0:
            break;
        case 1:
            Power();
            break;
        case 2:
            PrimeNumber();
            break;
        case 3:
            Fibonacci();
            break;
        default:
            cout << "�߸��� ��ȣ�Դϴ�." << endl;
            continue;
        }

        break;
    }
}
