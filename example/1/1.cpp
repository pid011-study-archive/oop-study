#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;

    cout << input;
    string output;
    if (input % 2 == 0 && input % 3 == 0)
    {
        output = "�� 2�� ������� 3�� ����Դϴ�.";
    }
    else if (input % 2 == 0)
    {
        output = "�� 2�� ����Դϴ�.";
    }
    else if (input % 3 == 0)
    {
        output = "�� 3�� ����Դϴ�.";
    }
    else
    {
        output = "�� 2�� ����� 3�� ����� �ƴմϴ�.";
    }
    cout << output << endl;
}