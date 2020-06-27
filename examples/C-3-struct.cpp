/*
"학번"과 "이름"으로 구성된 student 라는 구조체를 정의하고
학번과 이름을 입력받아서 출력하기
*/

#include <iostream>

using namespace std;

struct Student
{
    int id;
    char name[20];
};

int main()
{
    Student student;
    cout << "학번을 입력해주세요.\n> ";
    cin >> student.id;
    cout << "이름을 입력해주세요.\n> ";
    cin >> student.name;
    cout << "학번: " << student.id << endl;
    cout << "이름: " << student.name << endl;
}
