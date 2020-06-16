/*
문자열 배열 요소를 역순으로 만들어 반환하는 함수를 구현하시오.
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
