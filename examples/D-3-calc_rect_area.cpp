/*
좌 상단의 x, y좌표가 [0,0], 우 하단의 x, y좌표가 [100,100]인 직사각형 정
보를 표현하기 위해 구조체 Point를 멤버로 갖는 구조체 Rectangle을 정의
하시오.
Rectangle 구조체 변수를 인자로 전달받아 아래 좌표의 직사각형의 넓이
를 계산하시오.
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
