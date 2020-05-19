#include <iostream>

using namespace std;

int Square(int x);
double Square(double x);

int main()
{
    int integer_x = 5;
    double double_x = 5.5;

    cout << Square(integer_x) << endl;
    cout << Square(double_x) << endl;
}

int Square(int x) 
{
    return x * x;
}

double Square(double x)
{
    return x * x;
}

