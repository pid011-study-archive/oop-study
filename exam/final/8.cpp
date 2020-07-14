/*
8¹ø ¹®Á¦
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

constexpr auto SIZE = 10;

void Swap(int *a, int *b)
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

int main(void)
{
    srand((unsigned)time(NULL));
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = RandNumber();
    }

    QuickSort(false, arr, 0, SIZE - 1);
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << (i < SIZE - 1 ? ' ' : '\n');
    }
}
