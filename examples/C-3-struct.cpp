/*
"�й�"�� "�̸�"���� ������ student ��� ����ü�� �����ϰ�
�й��� �̸��� �Է¹޾Ƽ� ����ϱ�
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
    cout << "�й��� �Է����ּ���.\n> ";
    cin >> student.id;
    cout << "�̸��� �Է����ּ���.\n> ";
    cin >> student.name;
    cout << "�й�: " << student.id << endl;
    cout << "�̸�: " << student.name << endl;
}
