/*
�̸�, ����, ����, �����Ը� �����ϴ� ����ü Member�� �����ϰ�
���� �Է¹޴� ���α׷��� �ۼ��Ͻÿ�.
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
    cout << "�̸��� �Է����ּ���." << endl;
    cout << "< ";
    cin >> member.name;
    cout << "������ �Է����ּ���." << endl;
    cout << "< ";
    cin >> member.age;
    cout << "Ű�� �Է����ּ���." << endl;
    cout << "< ";
    cin >> member.height;
    cout << "�����Ը� �Է����ּ���." << endl;
    cout << "< ";
    cin >> member.weight;

    cout << "�̸�: " << member.name << endl;
    cout << "����: " << member.age << endl;
    cout << "Ű: " << member.height << endl;
    cout << "������: " << member.weight << endl;
}
