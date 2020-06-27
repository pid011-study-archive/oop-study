/*
학번, 이름, 국어, 영어, 수학 점수를 갖는 구조체 Student를 정의하고, 아래
와 같이 데이터 초기화 후, 이를 구조체 포인터로 받는 함수를 작성하여 데
이터를 출력하시오.

struct Student lee={“082193”, “이소망”, 85,79,92};
*/

#include <iostream>

using namespace std;

struct Student
{
    char id[50];
    char name[50];
    int koreanScore;
    int englishScore;
    int mathScore;
};

void Print(Student* s)
{
    cout << "학번: " << s->id << endl;
    cout << "이름: " << s->name << endl;
    cout << "국어점수: " << s->koreanScore << endl;
    cout << "영어점수: " << s->englishScore << endl;
    cout << "수학점수: " << s->mathScore << endl;
}

int main()
{
    Student pilgyeong = { "202013128", "곽필경", 100, 100, 100 };
    Print(&pilgyeong);
}
