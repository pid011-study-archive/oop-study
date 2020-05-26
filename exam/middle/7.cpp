#include <iostream>

using namespace std;

int main()
{
    unsigned short number = 1;
    while (true)
    {
        number++;
        if (number <= 0)
        {
            number--;
            cout << number << endl;
            break;
        }
    }
}
