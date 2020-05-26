#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void DrawLine(int length, char target)
{
    if (length == 0)
    {
        return;
    }
    cout << target;
    DrawLine(length - 1, target);
}

void Draw(int default_star_length, int star_length)
{
    if (star_length <= 0)
    {
        return;
    }
    int blank = (default_star_length - star_length) / 2;
    DrawLine(blank, ' ');
    DrawLine(star_length, '*');
    DrawLine(blank, ' ');
    cout << endl;
    Draw(default_star_length, star_length - 2);
}

void Draw(int default_star_length)
{
    Draw(default_star_length, default_star_length);
}

int main()
{
    Draw(19);
}
