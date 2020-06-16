/*
길이가 5인 int 배열 arr를 선언하고 이를 1, 2, 3, 4, 5로 초기화한 다음,
이 배열의 마지막 요소를 가리키는 포인터 변수 ptr을 선언한다.
그 다음 포인터 변수 ptr만을 이용하여 배열에 저장된 모든 정수를 더하고
그 결과를 출력하는 프로그램을 작성하시오.
*/

#include <iostream>

using namespace std;

int main()
{
    const int len = 5;
    int arr[len] = { 1,2,3,4,5 };
    int* ptr = arr + len - 1;

    int sum = 0;
    for (int i = 1; i <= len; i++)
    {
        sum += *ptr;
        ptr--;
    }
    cout << sum << endl;
}
