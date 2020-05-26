#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int accRandom();

int main()
{
    int res;
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++)
    {
        res = accRandom();
    }
    cout << "숫자 3이 나온 횟수 :" << res << endl;
}

int accRandom()
{
    static int count = 0;
    static int sum = 0;
    count++;
    int n;
    n = rand() % 5 + 1;

    if (count == 10)
    {
        cout << endl;
    }
    else
    {
        cout << n << " ";
    }
    if (n == 3)
    {
        sum++;
    }
    return sum;
}
