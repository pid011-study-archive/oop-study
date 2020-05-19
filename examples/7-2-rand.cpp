#include <iostream>
#include <stdlib.h>
#include<time.h>

using namespace std;

inline int RandDice() { return rand() % 6 + 1; }
int main()
{
    int dice = 6;
    int current = 0;

    srand((unsigned)time(NULL));
    while (current != dice)
    {
        current = RandDice();
        cout << current << endl;
    }
}
