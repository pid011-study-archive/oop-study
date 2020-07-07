/*
키보드로부터 자신의 이름과 주소를 입력한 후 텍
스트 파일(ex1.txt)로 저장하시오.
*/

#include <iostream>
#include <fstream>

using namespace std;

struct Info
{
    char name[50];
    char adress[500];
};

void WriteFile()
{
    Info info;
    cout << "1번째 사람의 이름: ";
    cin.getline(info.name, 50);
    cout << "주소: ";
    cin.getline(info.adress, 80);
    ofstream fout("ex1.txt", ios::out | ios::app);
    fout << info.name << "," << info.adress << endl;
    fout.close();
}

void ReadFile()
{
    char ch;

    ifstream fin("ex1.txt");
    if (!fin)
    {
        cout << "파일을 열 수 없습니다.\n";
        return;
    }
    while (fin.get(ch))
    {
        cout << ch;
    }
    fin.close();
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        WriteFile();
    }
    ReadFile();
}
