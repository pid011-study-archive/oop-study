/*
���� 2���� �迭�� ���� ���ϴ� �Լ��� �ۼ��Ͻÿ�.
(�Լ��� ���ڷ� �迭�����͸� ���)
*/

#include <iostream>

using namespace std;

int arr2DSum(int(*arr)[4], int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
    }

    return sum;
}

int main()
{
    int arr1[2][4] = { 1,2,3,4,5,6,7,8 };
    int sum = arr2DSum(arr1, sizeof(arr1) / sizeof(arr1[0]));
    cout << sum << endl;
    return 0;
}
