/*
���� ����ü�� �����͸� �μ��� �޾� �����͸� �Է¹��� ��, 1�� ���� ��
���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
struct person
{
    char name[20];
    int age;
    double weight;
    double height;
};
---------------
���� : �嵿��
���� : 22
ü�� : 58
���� : 173.2
�嵿�Ǵ� ���� 22, ü�� 58, ���� 173.2 �Դϴ�.
1�� ���� ������ 23�Դϴ�
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
    cout << "����: " << p->name << endl;
    cout << "����: " << p->age << endl;
    cout << "ü��: " << p->weight << endl;
    cout << "����: " << p->height << endl;
    cout << endl;
    printf("%s�� ���� %d, ü�� %f, ���� %f�Դϴ�.\n", p->name, p->age, p->weight, p->height);
    printf("1�� ���� ������ %d�Դϴ�.\n", p->age + 1);
}

int main()
{
    Person p = { "�嵿��", 22, 58, 173.2 };
    Print(&p);
}
