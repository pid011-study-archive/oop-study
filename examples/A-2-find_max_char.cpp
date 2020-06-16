/*
문자열에서 가장 큰 값을 찾아 반환하는 함수를 작성하시오.
*/

#include <iostream>

using namespace std;

char findMaxChar(char a[], char max, int acc)
{
    if (a[acc] == '\0')
    {
        return max;
    }
    return findMaxChar(a, (max >= a[acc] ? max : a[acc]), ++acc);
}

char findMaxChar(char a[])
{
    return findMaxChar(a, a[0], 0);
}

int main()
{
    char str[] = "game over!";
    cout << findMaxChar(str) << endl;
    return 0;
}
