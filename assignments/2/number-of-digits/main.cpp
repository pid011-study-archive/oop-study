/*
10000단위의 정수를 한 개 입력받아 다음과 같이 출력하는
프로그램을 작성하라.

e.g.
12345 => 1만2천3백4십5
*/

#include <iostream>

using namespace std;

int main()
{
    //TODO: string이 아닌 integer형 변수로 입력받아야 함
    string input;
    cin >> input;

    cout << input[0] << "만" << input[1] << "천" << input[2] << "백" << input[3] << "십" << input[4] << '\n';
}