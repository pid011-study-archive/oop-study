/*
아래 데이터를 갖는 구조체를 선언하고, 데이터를 입력받는 함수와 데이터
를 출력하는 함수를 정의하시오.
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
