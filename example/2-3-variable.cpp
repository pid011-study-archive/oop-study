/*
int 변수 num1, num2, num3, num4를 선언하고 각각 10, 20, 30, 40을
할당한 후, 아래와 같은 결과를 출력하시오.

num1 : 10, num2 : 20
num3: 30, num4: 40

char 변수에 오늘 날짜를 초기화 한 후 아래를 출력하시오.

오늘은 2017년 3월 7일입니다.
*/

#include <iostream>

using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    int num4 = 40;

    cout << "num1 : " << num1 << ", num2 : " << num2 << '\n';
    cout << "num3 : " << num3 << ", num4 : " << num4 << '\n';

    char date[] = "2020년 4월 7일";
    cout << "오늘은 " << date << "입니다.\n";

    return 0;
}