/*
인자로 전달된 int형 변수의 부호를 바꾸는 함수를 정의하시오
*/

#include <iostream>

using namespace std;

void change(int& x)
{
    x = -x;
}

int main()
{
    int x = 10;
    int y = -4;
    change(x), change(y);
    cout << x << endl;
    cout << y << endl;
}
