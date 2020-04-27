/*
키보드로부터 두 정수를 입력받은 후 덧셈한 후 출력하는 프로그램

첫번째 정수 입력 : 34
두번째 정수 입력 : 29
두 정수의 합 : 63
*/

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "첫번째 정수 입력 : ";
    cin >> x;
    cout << "두번째 정수 입력 : ";
    cin >> y;

    int result = x + y;
    cout << "두 정수의 합 : " << result << endl;
}