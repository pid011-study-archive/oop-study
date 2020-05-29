#include <iostream>
#include "russian_roulette.h"

using namespace std;

int main()
{
    int player_count;
    while (true)
    {
        cout << "플레이할 인원을 입력해주세요 : ";
        cin >> player_count;
        if (player_count > 1)
        {
            break;
        }
        else
        {
            cout << "러시안 룰렛을 플레이하려면 최소 2명 이상이 필요합니다." << endl;
        }
    }
    int result = RussianRoulette(player_count);
    cout << "패자 : " << result << "번째 플레이어" << endl;
} 
