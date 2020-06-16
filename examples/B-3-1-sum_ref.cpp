/*
참조자를 이용하여 인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수를 정의하시오.
*/

#include <iostream>

using namespace std;

void sum(int &x)
{
    x++;
}

int main()
{
    int x = 0;
    for (int i = 0; i < 5; i++)
    {
        sum(x);
    }
    cout << x << endl;
}
