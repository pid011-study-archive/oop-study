/*
�й�, �̸�, ����, ����, ���� ������ ���� ����ü Student�� �����ϰ�, �Ʒ�
�� ���� ������ �ʱ�ȭ ��, �̸� ����ü �����ͷ� �޾� �����͸� ����ϴ�
���α׷��� �ۼ��Ͻÿ�.

struct Student lee={��082193��, ���̼Ҹ���, 85,79,92};
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
    Student pilgyeong = { "202013128", "���ʰ�", 100, 100, 100 };
    Student* student_ptr = &pilgyeong;

    cout << "�й�: " << student_ptr->id << endl;
    cout << "�̸�: " << student_ptr->name << endl;
    cout << "��������: " << student_ptr->koreanScore << endl;
    cout << "��������: " << student_ptr->englishScore << endl;
    cout << "��������: " << student_ptr->mathScore << endl;
}
