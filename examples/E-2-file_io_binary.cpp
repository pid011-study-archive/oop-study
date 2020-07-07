/*
이름과 주소를 입력한 후 이진 파일로 저장하시오.
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
        cout << i << "번째 사람의 이름: ";
        cin.getline(info.name, 30);
        cout << "주소: ";
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
        cout << "파일이 존재하지 않습니다." << endl;
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
