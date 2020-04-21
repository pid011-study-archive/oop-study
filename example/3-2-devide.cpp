/*
(1) 가로와 세로의 길이를 입력받아 직사각형의 면적을 구하는 프로그램을
작성하시오.

(2) 섭씨온도와 화씨온도
섭씨온도를 화씨온도로 변환하는 수식은 C=5/9(F-32) 이다.
화씨온도를 입력받아 섭씨온도로 변환하는 프로그램을 작성하시오.
*/

#include <iostream>

using namespace std;

int main()
{
    double x, y, result;
    cin >> x >> y;
    result = x * y;
    cout << result << endl;

    double tempF, tempC;
    cin >> tempF;
    tempC = (5.0 / 9.0) * (tempF - 32.0);
    cout << tempC << endl;
}