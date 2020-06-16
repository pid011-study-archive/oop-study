/*
int형 배열에 5개의 랜덤한 숫자가 들어있다. 이 배열의 숫자들 중 최대값이
저장된 배열요소의 주소값과 최소값이 저장된 배열요소의 주소값을 구하는
함수 MaxAndMin()을 작성하시오.
*/

#include <iostream>

using namespace std;

void MaxAndMin(int* arr, int length, int** maxPtr, int** minPtr)
{
    if (length < 1)
    {
        return;
    }
    *maxPtr = &arr[0];
    *minPtr = &arr[0];
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > **maxPtr)
        {
            *maxPtr = &arr[i];
        }

        if (arr[i] < **minPtr)
        {
            *minPtr = &arr[i];
        }
    }
}

int main()
{
    int* maxPtr;
    int* minPtr;
    int arr[5] = { 12,56,23,1,99 };
    MaxAndMin(arr, 5, &maxPtr, &minPtr);

    cout << *maxPtr << endl;
    cout << *minPtr << endl;
}
