/*
10개의 int형 배열을 동적메모리 할당하고 각각에 1~10까지의 수를 저장하시오.
*/

#include <iostream>

using namespace std;

int main()
{
    const int length = 10;
    int* a = new int[length];
    for (int i = 1; i <= length; i++)
    {
        a[i - 1] = i;
    }

    delete[] a;

    return 0;
}
