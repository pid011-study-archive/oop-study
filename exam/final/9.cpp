/*
9번 문제
*/

#include <iostream>

using namespace std;

typedef struct {
    char name[20]; // 이름
    int major_score[3]; // 국어, 영어, 수학 점수
    int total; // 합계
    double average; // 평균
} Grade;

void getData(Grade *g)
{
    strcpy_s(g[0].name, "아이유");
    g[0].major_score[0] = 100;
    g[0].major_score[1] = 99;
    g[0].major_score[2] = 82;
    strcpy_s(g[1].name, "장동건");
    g[1].major_score[0] = 87;
    g[1].major_score[1] = 90;
    g[1].major_score[2] = 94;
    strcpy_s(g[2].name, "유아인");
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
    cout << "이 름" << '\t' << "국어" << '\t' << "영어" << '\t' << "수학" << '\t' << "총점" << '\t' << "평균" << endl;
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
