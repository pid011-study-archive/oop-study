/*
���� �ܾ �Է¹޾� char�� �迭�� �����ϰ�, �迭�� ����� �ܾ ������
�� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(null������ ��ġ�� ����Ǹ� ��
�ȴ�.)
*/

#include <iostream>

using namespace std;

int main()
{
    char str[100];
    cin >> str;
    int length = 0;
    for (int i = 0; i < sizeof(str) / sizeof(char); i++)
    {
        if (str[i] == '\0') break;
        length++;
    }
    int j = length - 1;
    for (int i = 0; i < length / 2; i++)
    {
        char tmp = str[i];
        str[i] = str[j - i];
        str[j - i] = tmp;
    }

    cout << str << endl;
}
