/*
전부 완성하지는 못했고 퍼즐을 전부 섞는 단계까지만 완성했습니다.
*/

#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

constexpr int WIDTH = 4;
constexpr int HEIGHT = 4;
constexpr char SYMBOL[4] = { '[', ']' };

string m_symbol_str(SYMBOL);

void initializeMap(string (*map)[WIDTH]);
void shuffleMap(string (*map)[WIDTH]);
void printMap(string (*map)[WIDTH]);

inline void swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

inline int randNumber(int max)
{
    return rand() % max;
}

int main()
{
    string map[WIDTH][HEIGHT];
    initializeMap(map);
    printMap(map);
    Sleep(1000);
    shuffleMap(map);


}

/// <summary>
/// Initialize the map
/// </summary>
void initializeMap(string (*map)[WIDTH])
{
    int num = 1;
    int t1 = randNumber(HEIGHT), t2 = randNumber(WIDTH);
    

    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            map[i][j] = (i == t1 && j == t2) ? m_symbol_str : to_string(num);
            num++;
        }
    }
}

/// <summary>
/// Shuffle map item
/// </summary>
void shuffleMap(string (*map)[WIDTH])
{
    srand((unsigned)time(NULL));

    int shuffle_count = WIDTH * HEIGHT * 2;
    for (int i = 0; i < shuffle_count; i++)
    {
        int a_p1 = randNumber(HEIGHT), a_p2 = randNumber(WIDTH);
        int b_p1, b_p2;
        do
        {
            b_p1 = randNumber(HEIGHT), b_p2 = randNumber(WIDTH);
        } while (a_p1 == b_p1 && a_p2 == b_p2);


        swap(map[a_p1][a_p2], map[b_p1][b_p2]);
        printMap(map);
        if (i < shuffle_count - 1)
        {
            cout << "퍼즐을 섞는 중입니다..." << endl;
        }
        Sleep(250);
    }
}

/// <summary>
/// Clear window and print the map
/// </summary>
/// <param name="map"></param>
void printMap(string (*map)[WIDTH])
{
    system("cls");
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            int len = map[i][j].length();
            int space = 5 - len;
            cout << map[i][j];
            for (int i = 0; i < space; i++)
            {
                cout << ' ';
            }
            if (j == WIDTH - 1)
            {
                cout << "\n\n";
            }
        }
    }
}
