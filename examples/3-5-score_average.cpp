/*
국어, 영어, 수학 세 과목의 시험점수를 입력받아, 합계와 평균을 구하는
프로그램을 작성하시오.
*/

#include <iostream>

using namespace std;

int main()
{
    int korean_score, math_score, english_score;
    float sum, average;

    cin >> korean_score >> math_score >> english_score;

    sum = korean_score + math_score + english_score;
    average = sum / 3;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
}