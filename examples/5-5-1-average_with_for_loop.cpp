/*
키보드로부터 실수를 입력받아 입력된 전체 값의 평균을 출력하시오.
키보드 입력은 음수값이 입력되면 종료하고 음수값은 평균에서 제외한다.(for문 이용)
*/


#include <iostream>

using namespace std;

int main()
{
	double sum = 0, count = 0, average;
	for (double i = 0; i >= 0;)
	{
		cin >> i;
		if (i >= 0)
		{
			sum += i;
			count++;
		}
	}
	average = sum / count;
	cout << average << '\n';
}
