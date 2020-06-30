/*
구조체 및 공용체 구조를 이용하여 프로그램을 작성하라.
• main()에서 person1, person2를 입력한다.
• 출력하는 함수 printPerson()을 만든다.
• 이 함수를 이용하여 person1과 person2를 출력한다.
name : 아이유
mail : iu@chungkang
mobile : 0102344344
-----------------
name : 공유
major : 게임컨텐츠
id : 200010
score : 4.0
*/

#include <iostream>

using namespace std;

struct Professor
{
    char name[20];
    char mail[20];
    char mobile[20];
};

struct Student
{
    char name[20];
    char major[50];
    int id;
    float score;
};

struct Person
{
    union Info
    {
        Professor professorInfo;
        Student studentInfo;
    };

    char type;
    Info info;
};

void PrintPerson(Person& p)
{
    switch (p.type)
    {
    case 'p':
        cout << "name: " << p.info.professorInfo.name << endl;
        cout << "mail: " << p.info.professorInfo.mail << endl;
        cout << "mobile: " << p.info.professorInfo.mobile << endl;
        break;
    case 's':
        cout << "name: " << p.info.studentInfo.name << endl;
        cout << "major: " << p.info.studentInfo.major << endl;
        cout << "id: " << p.info.studentInfo.id << endl;
        cout << "score: " << p.info.studentInfo.score << endl;
        break;
    default:
        cout << "Unknown type character" << endl;
        break;
    }
}

int main()
{
    Person p1 = { 'p' };
    p1.info.professorInfo = Professor{ "아이유", "iu@ck.ac.kr", "01012345678" };

    Person p2 = { 's' };
    p2.info.studentInfo = Student{ "공유", "게임컨텐츠", 200010, 4.0 };
    PrintPerson(p1);
    cout << "---------------------------------" << endl;
    PrintPerson(p2);

}
