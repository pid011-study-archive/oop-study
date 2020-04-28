/*
다음과 같이 출력하시오.
*
**
***
****
*****
*/

#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i < 6; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << '*';
        }
        cout << '\n';
    }
}
