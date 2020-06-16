/*
square with call by value, call by reference
*/

#include <iostream>

using namespace std;

int Square(int x)
{
    return x * x;
}

void Square(int* x)
{
    *x = *x * *x;
}

int main()
{
    int x1 = 5;
    int x2 = x1;
    cout << Square(x1) << endl;

    Square(&x2);
    cout << x2 << endl;
}
