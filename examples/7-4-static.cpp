#include <iostream>

using namespace std;



int AddToTotal(int num)
{
    static int total = 0;
    total += num;
    return total;
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        int input;
        cin >> input;
        cout << AddToTotal(input) << endl;
    }
}
