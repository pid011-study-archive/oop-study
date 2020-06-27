/*
이름, 연령, 신장, 몸무게를 관리하는 구조체 Member를 선언하고
값을 입력받는 프로그램을 작성하시오.
*/

#include <iostream>

using namespace std;

struct Member
{
    char name[50];
    int age;
    float height;
    float weight;
};

int main()
{
    Member member;
    cout << "이름을 입력해주세요." << endl;
    cout << "< ";
    cin >> member.name;
    cout << "연령을 입력해주세요." << endl;
    cout << "< ";
    cin >> member.age;
    cout << "키를 입력해주세요." << endl;
    cout << "< ";
    cin >> member.height;
    cout << "몸무게를 입력해주세요." << endl;
    cout << "< ";
    cin >> member.weight;

    cout << "이름: " << member.name << endl;
    cout << "연령: " << member.age << endl;
    cout << "키: " << member.height << endl;
    cout << "몸무게: " << member.weight << endl;
}
