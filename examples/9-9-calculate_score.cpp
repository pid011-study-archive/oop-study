/*
다음과 같이 2차원 배열을 사용해 3명의 학생에 대한 국어, 영어 점수를
저장하고 학생별 과목 총점과 각 과목당 총점을 계산한 후 화면
에 출력하는 프로그램을 작성하시오.
*/

#include <iostream>

using namespace std;

int main()
{
    const int student_count = 3;
    const int subject_count = 3;

    string subject_names[subject_count] = { "국어", "영어", "수학" };
    int scores[student_count][subject_count] =
    {
        {90,    75,     87},
        {85,    80,     79},
        {100,   73,     98}
    };

    int arr[student_count + 1][subject_count + 1];
    for (int i = 0; i < student_count + 1; i++)
    {
        for (int j = 0; j < subject_count + 1; j++)
        {
            arr[i][j] = (i < student_count && j < subject_count) ? scores[i][j] : 0;
        }
    }

    for (int i = 0; i < student_count; i++)
    {
        for (int j = 0; j < subject_count; j++)
        {
            int score = scores[i][j];
            arr[student_count][j] += score;
            arr[i][subject_count] += score;
        }
    }

    cout << "학번\t국어\t영어\t수학\t총점\n";
    for (int i = 0; i < student_count + 1; i++)
    {
        if (i < student_count)
        {
            cout << i + 1 << "번";
        }
        else
        {
            cout << "총점";
        }
        cout << '\t';
        for (int j = 0; j < subject_count + 1; j++)
        {
            cout << arr[i][j] << (j < subject_count ? '\t' : '\n');
        }
    }
}
