/*
O피라미드를 출력하는 프로그램을 작성하시오.

*
O*
OO*
OOO*
OOOO*
*/

#include <iostream>

using namespace std;

int main()
{
    int i = 0, length = 5;
    while (i < length)
    {
        int j = 0;
        while (j < i)
        {
            cout << 'O';
            j++;
        }
        cout << "*\n";
        i++;
    }
}