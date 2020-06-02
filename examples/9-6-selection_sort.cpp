/*
rand()�Լ��� �̿��Ͽ� 100�̸��� ���� 10���� �迭�� ������ ��, ��������
���� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#include <iostream>
#include <stdlib.h>
#include<time.h>

using namespace std;

void SelectionSort(int arr[], int len);

int main()
{
    const int len = 100;
    int arr[len];

    srand((unsigned)time(NULL));
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 100;
    }
    SelectionSort(arr, len);

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << (i < len - 1 ? ' ' : '\n');
    }
}

void SelectionSort(int arr[], int len)
{
    int tmp = 0, min_idx = 0;
    
    for (int i = 0; i < len - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        if (i != min_idx)
        {
            tmp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = tmp;
        }
    }
}
