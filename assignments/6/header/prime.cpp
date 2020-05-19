#include <iostream>

using namespace std;

void PrimeNumber()
{
    cout << "어떤 수까지의 소수를 보시겠습니까? : ";
    int n;
    cin >> n;

    if (n <= 1)
    {
        cout << "2보다 같거나 큰 수를 입력해주세요." << endl;
        return;
    }

    cout << n << "까지의 소수는..." << endl;
    
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
