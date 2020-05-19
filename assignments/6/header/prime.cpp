#include <iostream>

using namespace std;

void PrimeNumber()
{
    cout << "� �������� �Ҽ��� ���ðڽ��ϱ�? : ";
    int n;
    cin >> n;

    if (n <= 1)
    {
        cout << "2���� ���ų� ū ���� �Է����ּ���." << endl;
        return;
    }

    cout << n << "������ �Ҽ���..." << endl;
    
    int size = n + 1;

    bool* prime = new bool[size];
    for (int i = 0; i < size; i++)
    {
        prime[i] = true;
    }

    for (int i = 2; i * i < size; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < size; j += i)
            {
                prime[j] = false;
            }
        }
    }

    for (int i = 1; i < size; i++)
    {
        if (prime[i])
        {
            cout << i << ' ';
        }
    }

    cout << endl;
}
