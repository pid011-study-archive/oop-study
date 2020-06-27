/*
학번, 이름, 국어, 영어, 수학 점수를 갖는 구조체 Student를 정의하고, 아래
와 같이 데이터 초기화 후, 이를 구조체 포인터로 받아 데이터를 출력하는
프로그램을 작성하시오.

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

int main()
{
    Student pilgyeong = { "202013128", "곽필경", 100, 100, 100 };
    Student* student_ptr = &pilgyeong;

    cout << "학번: " << student_ptr->id << endl;
    cout << "이름: " << student_ptr->name << endl;
    cout << "국어점수: " << student_ptr->koreanScore << endl;
    cout << "영어점수: " << student_ptr->englishScore << endl;
    cout << "수학점수: " << student_ptr->mathScore << endl;
}
