/*
성적(100점 만점)을 입력받아 학점을 부여하는 프로그램(switch사용)
(90점 이상은 A, 80점 이상은 B, 70점 이상은 C, 그 이하는 F)
*/

#include <iostream>

using namespace std;

int main()
{
	int score;
	cin >> score;

	switch (score / 10)
	{
	case 10:
	case 9:
		cout << "A 학점입니다.\n";
		break;
	case 8:
		cout << "B 학점입니다.\n";
		break;
	case 7:
		cout << "C 학점입니다.\n";
		break;
	default:
		cout << "F 학점입니다.\n";
		break;
	}
}