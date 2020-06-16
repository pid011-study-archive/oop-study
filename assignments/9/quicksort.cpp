/*
1~100 ������ ������ ���ڸ� �߻��Ͽ� 50���� �迭�� ������ ��,
����(sorting) �˰���(bubble, insert, quick) �� �� ���� �����Ͽ�
���������� ������������ �����ϴ� ���α׷��� �ۼ��϶�.

Quicksort
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

constexpr auto SIZE = 50;

void Swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void QuickSort(bool asce, int arr[], int start, int end)
{
    if (start >= end) return;

    int key = start, i = start + 1, j = end;
    while (i <= j)
    {
        if (asce)
        {
            while (i <= end && arr[i] <= arr[key]) i++;
            while (j > start && arr[j] >= arr[key]) j--;
        }
        else
        {
            while (i <= end && arr[i] >= arr[key]) i++;
            while (j > start && arr[j] <= arr[key]) j--;
        }
        if (i > j)
        {
            Swap(&arr[key], &arr[j]);
        }
        else
        {
            Swap(&arr[i], &arr[j]);
        }
    }
    QuickSort(asce, arr, start, j - 1);
    QuickSort(asce, arr, j + 1, end);
}

inline int RandNumber()
{
    return rand() % 100 + 1;
}

void PrintArray(int arr[])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << (i < SIZE - 1 ? ' ' : '\n');
    }
}

int main(void)
{
    srand((unsigned)time(NULL));
    int arr1[SIZE], arr2[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        int num = RandNumber();
        arr1[i] = num;
        arr2[i] = num;
    }

    cout << "Unsorted array" << endl;
    PrintArray(arr1);
    cout << endl;

    cout << "Ascending order" << endl;
    QuickSort(true, arr1, 0, SIZE - 1);
    PrintArray(arr1);
    cout << endl;

    cout << "Descending order" << endl;
    QuickSort(false, arr2, 0, SIZE - 1);
    PrintArray(arr2);
}
