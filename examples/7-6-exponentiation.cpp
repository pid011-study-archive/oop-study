#include <iostream>

using namespace std;

int Exponentiation(int base, int exponent, int total = 0)
{
    if (total == 0)
    {
        total = base;
    }
    if (exponent <= 1)
    {
        return total;
    }

    return Exponentiation(base, exponent - 1, total * base);
}

int main()
{
    cout << Exponentiation(2, 1) << endl;
}
