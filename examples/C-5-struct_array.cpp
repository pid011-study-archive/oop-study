/*
�����͸� ����ü ������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#include <iostream>

using namespace std;

struct Profile
{
    char name[50];
    char postCode[50];
    char adress[500];
};

int main()
{
    Profile profiles[3] =
    {
        {"���ϳ�", "05716", "��⵵ ��õ�� û����ȭ������б�"},
        {"�ڵγ�", "23048", "���� ���ı� ������ �Ե�����"},
        {"�輼��", "08124", "��⵵ ��õ�� �ɸ���"}
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "����: " << profiles[i].name << endl;
        cout << "�����ȣ: " << profiles[i].postCode << endl;
        cout << "���ּ�: " << profiles[i].adress << endl;
        cout << endl;
    }
}
