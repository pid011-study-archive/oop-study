/*
int�� �迭�� 5���� ������ ���ڰ� ����ִ�. �� �迭�� ���ڵ� �� �ִ밪��
����� �迭����� �ּҰ��� �ּҰ��� ����� �迭����� �ּҰ��� ���ϴ�
�Լ� MaxAndMin()�� �ۼ��Ͻÿ�.
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
