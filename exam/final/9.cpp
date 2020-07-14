/*
9�� ����
*/

#include <iostream>

using namespace std;

typedef struct {
    char name[20]; // �̸�
    int major_score[3]; // ����, ����, ���� ����
    int total; // �հ�
    double average; // ���
} Grade;

void getData(Grade *g)
{
    strcpy_s(g[0].name, "������");
    g[0].major_score[0] = 100;
    g[0].major_score[1] = 99;
    g[0].major_score[2] = 82;
    strcpy_s(g[1].name, "�嵿��");
    g[1].major_score[0] = 87;
    g[1].major_score[1] = 90;
    g[1].major_score[2] = 94;
    strcpy_s(g[2].name, "������");
    g[2].major_score[0] = 92;
    g[2].major_score[1] = 78;
    g[2].major_score[2] = 69;
}

void getSumAndAverage(Grade *g)
{
    g->total = 0;
    g->average = 0;

    for (int i = 0; i < 3; i++)
    {
        g->total += g->major_score[i];
    }
    g->average = (double)g->total / 3;
}

void printGrade(Grade g[], int length)
{
    cout << "�� ��" << '\t' << "����" << '\t' << "����" << '\t' << "����" << '\t' << "����" << '\t' << "���" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << g[i].name << '\t';
        cout << g[i].major_score[0] << '\t' << g[i].major_score[1] << '\t' << g[i].major_score[2] << '\t';
        cout << g[i].total << '\t' << g[i].average << endl;
    }
}

int main()
{
    Grade grade[3];
    getData(grade);
    for (int i = 0; i < 3; i++)
    {
        getSumAndAverage(&(grade[i]));
    }
    printGrade(grade, 3);
}
