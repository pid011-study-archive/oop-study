/*
아래 2차원배열을 포인터로 선언하고 포인터를 이용하여 값을 출력하시오.
*/

#include <iostream>

using namespace std;

int main()
{
    int arr1[2][2] = { {1,2}, {3,4} };
    int arr2[3][2] = { {1,2},{2,3},{5,6} };
    int arr3[4][2] = { {1,2},{2,3},{5,6},{7,8} };
    int(*ptr1)[2] = arr1;
    int(*ptr2)[2] = arr2;
    int(*ptr3)[2] = arr3;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << ptr1[i][j] << ' ';
        }
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << ptr2[i][j] << ' ';
        }
    }
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << ptr3[i][j] << ' ';
        }
    }
    cout << endl;
}
