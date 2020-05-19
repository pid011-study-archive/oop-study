#include <iostream>

using namespace std;

int TotalSum(int n, int sum = 0)
{
    if (n == 1)
    {
        return sum + 1;
    }
    sum += n;
    return TotalSum(n - 1, sum);
}

int main()
{
    int n;
    cin >> n;
    cout << TotalSum(n) << endl;
}
