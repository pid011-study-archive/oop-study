/*
(1) 두 정수를 입력받은 후, 두 정수를 나누어 아래와 같이 몫과 나머지를 출
력하는 프로그램을 작성하시오

(2) 초단위의 시간을 입력받은 후, “x분 x초＂로 변환하여 출력하는 프로그
램을 작성하시오.
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "입력정수1 : ";
    cin >> num1;
    cout << "입력정수2 : ";
    cin >> num2;
    cout << "몫 : " << num1 / num2 << '\n';
    cout << "나머지 : " << num1 % num2 << '\n';

    int second, min;
    cout << "초단위의 시간을 입력하시오: ";
    cin >> second;

    cout << second << "초는 ";
    min = second / 60;
    cout << min << "분 " << second - (min * 60) << "초입니다.\n";
}