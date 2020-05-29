#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

using namespace std;

inline int rand_bullet(int maximum_bullet_count)
{
    return rand() % maximum_bullet_count + 1;
}

int RussianRoulette(int player_count)
{
    cout << "게임 인원 : " << player_count << "명" << endl;
    srand((unsigned)time(NULL));

    const int maximum_bullet_count = 6;

    int current = rand() % player_count + 1;
    cout << current << "번째 플레이어부터 시작합니다." << endl;

    int bullet_position = rand_bullet(maximum_bullet_count);

    while (true)
    {
        Sleep(1000);
        int position = rand_bullet(maximum_bullet_count);
        cout << current << "번째 플레이어가 탄창을 돌렸습니다." << endl;
        Sleep(1000);

        if (position == bullet_position)
        {
            cout << "방아쇠를 당겼더니 총알이 발사되어 죽었습니다." << endl;
            return current;
        }
        else
        {
            cout << "방아쇠를 당겼지만 총알이 나가지 않았습니다." << endl;
        }
        current = current == player_count ? 1 : current + 1;
    }
}
