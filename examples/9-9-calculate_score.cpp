/*
������ ���� 2���� �迭�� ����� 3���� �л��� ���� ����, ���� ������
�����ϰ� �л��� ���� ������ �� ����� ������ ����� �� ȭ��
�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#include <iostream>

using namespace std;

int main()
{
    const int student_count = 3;
    const int subject_count = 3;

    string subject_names[subject_count] = { "����", "����", "����" };
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

    cout << "�й�\t����\t����\t����\t����\n";
    for (int i = 0; i < student_count + 1; i++)
    {
        if (i < student_count)
        {
            cout << i + 1 << "��";
        }
        else
        {
            cout << "����";
        }
        cout << '\t';
        for (int j = 0; j < subject_count + 1; j++)
        {
            cout << arr[i][j] << (j < subject_count ? '\t' : '\n');
        }
    }
}
