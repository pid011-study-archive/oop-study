/*
Ű����κ��� �ڽ��� �̸��� �ּҸ� �Է��� �� ��
��Ʈ ����(ex1.txt)�� �����Ͻÿ�.
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
    cout << "1��° ����� �̸�: ";
    cin.getline(info.name, 50);
    cout << "�ּ�: ";
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
        cout << "������ �� �� �����ϴ�.\n";
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
