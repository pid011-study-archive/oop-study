/*
길이가 5인 int 배열 arr를 선언하고 이를 1, 2, 3, 4, 5로 초기화한 다음,
이 배열의 첫번째 요소를 가리키는 포인터 변수 ptr을 선언한다.
그 다음 포인터 변수 ptr만을 이용하여 모든 배열 요소의 값을 2씩 증가
시키고, 출력하는 프로그램을 작성하시오.
*/

#include <iostream>

using namespace std;

int main()
{
    int arr[5] = { 1,2,3,4,5 };
    int* ptr = arr;
    for (int i = 1; i <= 5; i++)
    {
        *ptr += 2;
        ptr++;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << (i < 4 ? ' ' : '\n');
    }
}
