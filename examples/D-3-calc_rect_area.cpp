/*
�� ����� x, y��ǥ�� [0,0], �� �ϴ��� x, y��ǥ�� [100,100]�� ���簢�� ��
���� ǥ���ϱ� ���� ����ü Point�� ����� ���� ����ü Rectangle�� ����
�Ͻÿ�.
Rectangle ����ü ������ ���ڷ� ���޹޾� �Ʒ� ��ǥ�� ���簢���� ����
�� ����Ͻÿ�.
(1, 1), (4, 4)
(0, 0), (7, 5)
*/

#include <iostream>

using namespace std;

struct Point
{
    int X;
    int Y;
};

struct Rectangle
{
    Point LeftDown;
    Point RightUp;
};

int CalculateRectangleArea(Rectangle& r)
{
    return (r.RightUp.X - r.LeftDown.X) * (r.RightUp.Y - r.LeftDown.Y);
}

int main()
{
    Rectangle r1 = Rectangle{ Point{1, 1}, Point{4, 4} };
    Rectangle r2 = Rectangle{ Point{0, 0}, Point{7, 5} };

    cout << CalculateRectangleArea(r1) << endl;
    cout << CalculateRectangleArea(r2) << endl;
}
