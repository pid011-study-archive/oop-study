/*
길이가 6인 int 배열 arr를 선언하고 이를 1, 2, 3, 4, 5, 6 으로 초기화한
다음, 배열에 저장된 값의 순서가 6, 5, 4, 3, 2, 1이 되도록 변경하는 프
로그램을 작성하시오.
단, 배열의 앞과 뒤를 가리키는 포인터 변수 두 개를 선언해서 이를 활
용하여 저장된 값의 순서를 바꿔야 한다.
*/

#include <iostream>

using namespace std;

inline void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    const int len = 6;
    int arr[len] = { 1,2,3,4,5,6 };
    int* lptr = arr;
    int* rptr = arr + len - 1;
    for (int i = 0; i < len / 2; i++)
    {
        swap(lptr++, rptr--);
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << (i < len - 1 ? ' ' : '\n');
    }
}
