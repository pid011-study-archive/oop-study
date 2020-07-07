/*
�̸��� �ּҸ� �Է��� �� ���� ���Ϸ� �����Ͻÿ�.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const char* _fileName = "test3.dat";

struct UserInfo
{
    char name[30];
    char adress[100];
};

void WriteFile()
{
    UserInfo info;
    ofstream fout(_fileName, ios::out | ios::binary);
    for (int i = 1; i <= 3; i++)
    {
        cout << i << "��° ����� �̸�: ";
        cin.getline(info.name, 30);
        cout << "�ּ�: ";
        cin.getline(info.adress, 100);
        cin.ignore(10000, '\n');
        fout.write((char*)&info, sizeof(info));
    }
    fout.close();
}

void ReadFile()
{
    UserInfo info;
    ifstream fin(_fileName, ios::in | ios::binary);
    if (!fin)
    {
        cout << "������ �������� �ʽ��ϴ�." << endl;
        return;
    }


    while (fin.read((char*)&info, sizeof(info)))
    {
        cout << info.name << ", " << info.adress << endl;
    }
    fin.close();
}

int main()
{
    WriteFile();
    cout << "---------------" << endl;
    ReadFile();
}
