/*
다음 구조체의 포인터를 인수로 받아 데이터를 입력받은 후, 1년 후의 연
령을 출력하는 프로그램을 작성하시오.
struct person
{
    char name[20];
    int age;
    double weight;
    double height;
};
---------------
성명 : 장동건
연령 : 22
체중 : 58
신장 : 173.2
장동건님 연령 22, 체중 58, 신장 173.2 입니다.
1년 후의 연령은 23입니다
*/

#include <iostream>

using namespace std;

struct Person
{
    char name[20];
    int age;
    double weight;
    double height;
};

void Print(Person* p)
{
    cout << "성명: " << p->name << endl;
    cout << "연령: " << p->age << endl;
    cout << "체중: " << p->weight << endl;
    cout << "신장: " << p->height << endl;
    cout << endl;
    printf("%s님 연령 %d, 체중 %f, 신장 %f입니다.\n", p->name, p->age, p->weight, p->height);
    printf("1년 후의 연령은 %d입니다.\n", p->age + 1);
}

int main()
{
    Person p = { "장동건", 22, 58, 173.2 };
    Print(&p);
}
