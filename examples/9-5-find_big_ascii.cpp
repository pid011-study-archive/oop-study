/*
����ܾ �Է¹ް� �ܾ��� ���� �� �ƽ�Ű �ڵ尪�� ���� ū ���ڸ� ã�Ƽ�
����ϴ� ���α׷��� �ۼ��Ͻÿ�.
���� : LOVE�� �Էµ� ��� V�� ���
*/

#include <iostream>

using namespace std;

int main()
{
    char str[100];
    cin >> str;
    char big_ascii = 'A';
    for (int i = 0; i < sizeof(str) / sizeof(char); i++)
    {
        if (str[i] == '\0') break;
        if (big_ascii < str[i]) big_ascii = str[i];
    }

    cout << big_ascii << endl;
}
