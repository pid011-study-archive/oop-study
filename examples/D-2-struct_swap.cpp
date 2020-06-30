/*
���� ����ü�� �� ������ ������� ����� ���� ���� �ٲ��ִ� �Լ�
SwapPoint()�� �����ϰ� �ٲ� ���� ���(main����)�Ͻÿ�.
typedef struct Point
{
int x;
int y;
}pos;
pos s1 = {2, 4};
pos s2 = {7, 9};
*/

#include <iostream>

using namespace std;

typedef struct Point
{
    int x;
    int y;
} pos;

void Swap(int* x, int* y)
{
    *x += *y;
    *y = *x - *y;
    *x -= *y;
}

void SwapPoint(pos* p1, pos* p2)
{
    Swap(&p1->x, &p2->x);
    Swap(&p1->y, &p2->y);
}

void Print(pos* p)
{
    cout << "x = " << p->x << " y = " << p->y << endl;
}

int main()
{
    pos p1{ 1, 2 }, p2{ 3, 4 };
    Print(&p1);
    Print(&p2);
    cout << endl;
    SwapPoint(&p1, &p2);
    Print(&p1);
    Print(&p2);
}

// 4 2
// 6 2
// 6 4
// 2 4
