/*
�й�, �̸�, ����, ����, ���� ������ ���� ����ü Student�� �����ϰ�, �Ʒ�
�� ���� ������ �ʱ�ȭ ��, �̸� ����ü �����ͷ� �޴� �Լ��� �ۼ��Ͽ� ��
���͸� ����Ͻÿ�.

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

void Print(Student* s)
{
    cout << "�й�: " << s->id << endl;
    cout << "�̸�: " << s->name << endl;
    cout << "��������: " << s->koreanScore << endl;
    cout << "��������: " << s->englishScore << endl;
    cout << "��������: " << s->mathScore << endl;
}

int main()
{
    Student pilgyeong = { "202013128", "���ʰ�", 100, 100, 100 };
    Print(&pilgyeong);
}
