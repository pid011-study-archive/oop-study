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
    // ������
    int radius;

    // �߽���ǥ
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

    // ������ ����
    int area;
} FIGURE;

// ���� �簢���� ������ ���ϴ� �Լ�
void getArea(FIGURE *f);

// ���� �簢���� �����Ϳ� ������ ����ϴ� �Լ�
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
        cout << "���� ������ : " << f->circle.radius << endl;
        cout << "���� �߽���ǥ : " << printPOINT(f->circle.center) << endl;
        // ����...
        cout << "���� ���� : " << f->area << endl;
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
