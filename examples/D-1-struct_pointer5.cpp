/*
�Ʒ� �����͸� ���� ����ü�� �����ϰ�, �����͸� �Է¹޴� �Լ��� ������
�� ����ϴ� �Լ��� �����Ͻÿ�.
struct Student
{
char Pid[10];
char name[20];
int score;
}
typedef student std;
*/

#include <iostream>

using namespace std;

struct Student
{
    char Pid[10];
    char name[20];
    int score;
};

void InputData(Student* s)
{
    printf("Pid: ");
    scanf("%s", s->Pid);
    printf("Name: ");
    scanf("%s", s->name);
    printf("Score: ");
    scanf("%d", s->score);
}

void PrintData(Student* s)
{
    printf("Name: %s\n", s->name);
    printf("Pid: %s\n", s->Pid);
    printf("Score: %d\n", s->score);
}

int main()
{
    Student s;
    InputData(&s);
    printf("\n");
    PrintData(&s);
}
