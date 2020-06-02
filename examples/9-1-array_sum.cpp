#include <iostream>

using namespace std;

int main()
{
    const int length = 5;
    int a[length] = { 5, 6, 7, 8, 9 };
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
}
