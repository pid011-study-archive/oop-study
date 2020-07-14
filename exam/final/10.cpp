/*
contents_of_problem
*/

#include <iostream>

using namespace std;

constexpr double PI = 3.14;

typedef struct
{
    int x;
    int y;
} POINT;

typedef struct
{
    // 반지름
    int radius;

    // 중심좌표
    POINT center;
} CIRCLE;

typedef struct
{
    POINT p1;
    POINT p2;
} RECTANGLE;

typedef struct
{
    // 0: CIRCLE, 1: RECTANGLE
    int type_number;

    union
    {
        CIRCLE circle;
        RECTANGLE rect;
    };

    // 도형의 면적
    int area;
} FIGURE;

// 원과 사각형의 면적을 구하는 함수
void getArea(FIGURE *f);

// 원과 사각형의 데이터와 면적을 출력하는 함수
void printFigure(FIGURE *f);

int main()
{
    FIGURE circle{ 0 };
    circle.circle = CIRCLE{ 5, POINT{6, 6} };

    FIGURE rect{ 1 };
    rect.rect = RECTANGLE{ POINT{3, 1}, POINT{7, 10} };

    getArea(&circle);
    getArea(&rect);

    printFigure(&circle);
    printFigure(&rect);
}

void getArea(FIGURE *f)
{
    switch (f->type_number)
    {
    case 0:
        f->area = f->circle.radius * f->circle.radius * PI;
        break;
    case 1:
        int width = f->rect.p1.x - f->rect.p2.x;
        int height = f->rect.p2.y - f->rect.p1.x;
        f->area = width * height;
        break;
    default:
        break;
    }
}

inline void printPOINT(POINT *p)
{
    cout << p->x << ", " << p->y;
}

void printFigure(FIGURE *f)
{
    if (f->type_number == 0)
    {
        cout << "원의 반지름 : " << f->circle.radius << endl;
        cout << "원의 중심좌표 : " << printPOINT(f->circle.center) << endl;
        // 실패...
        cout << "원의 면적 : " << f->area << endl;
    }
    switch (f->type_number)
    {
    case 0:
        break;
    case 1:
        break;
    default:
        break;
    }
}
