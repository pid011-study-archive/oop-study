/*
���ڿ����� ���� ū ���� ã�� ��ȯ�ϴ� �Լ��� �ۼ��Ͻÿ�.
*/

#include <iostream>

using namespace std;

char findMaxChar(char a[], char max, int acc)
{
    if (a[acc] == '\0')
    {
        return max;
    }
    return findMaxChar(a, (max >= a[acc] ? max : a[acc]), ++acc);
}

char findMaxChar(char a[])
{
    return findMaxChar(a, a[0], 0);
}

int main()
{
    char str[] = "game over!";
    cout << findMaxChar(str) << endl;
    return 0;
}
