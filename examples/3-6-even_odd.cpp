/*
정수를 입력받아 짝수인 경우, “짝수입니다”를, 홀수인 경우, “홀수입
니다.”를 출력하는 프로그램을 작성하시오.
*/

#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;

    string output = (input % 2) == 0 ? "짝수입니다." : "홀수입니다.";
    cout << output;
}