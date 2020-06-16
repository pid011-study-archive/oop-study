/*
���ڿ� �迭 ��Ҹ� �������� ����� ��ȯ�ϴ� �Լ��� �����Ͻÿ�.
*/

#include <iostream>

using namespace std;

void reverseString(const char src[], char return_arr[], int str_len, int acc)
{
    if (src[acc] == '\0')
    {
        return_arr[acc] = '\0';
        return;
    }
    int pos = str_len - acc - 1;
    return_arr[pos] = src[acc];
    reverseString(src, return_arr, str_len, ++acc);
}

void reverseString(const char src[], char return_arr[])
{
    int len = strlen(src);
    reverseString(src, return_arr, len, 0);
}

int main()
{
    char src[] = "game over", dst[40];
    reverseString(src, dst);
    cout << src << endl;
    cout << dst << endl;
}
