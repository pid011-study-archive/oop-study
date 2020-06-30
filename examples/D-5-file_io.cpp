/*
2명의 학생에 관한 국어, 영어, 수학 점수를 키보드로부터 입력받고 텍스트
파일에 출력하시오.
struct student
{
char name[20];
int kor;
int eng;
int mat;
};
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct Student
{
    char name[100];
    int kor;
    int eng;
    int math;
};

void Input(Student& s)
{
    cout << "Name: ";
    cin.getline(s.name, 100);
    cout << "Korean score: ";
    cin >> s.kor;
    cout << "English score: ";
    cin >> s.eng;
    cout << "Math score: ";
    cin >> s.math;
    cin.ignore(1000, '\n');
}

void WriteStudentInfoOnFile(ofstream& stream, Student& student)
{
    stream << student.name << ' ' << student.kor << ' ' << student.eng << ' ' << student.math << endl;
}

int main()
{
    Student s1, s2;
    Input(s1);
    cout << "--------------------" << endl;
    Input(s2);

    ofstream stream;
    stream.open("test3.txt", ios::out);
    WriteStudentInfoOnFile(stream, s1);
    WriteStudentInfoOnFile(stream, s2);
    stream.close();
}
