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
    cout << "���� �ο� : " << player_count << "��" << endl;
    srand((unsigned)time(NULL));

    const int maximum_bullet_count = 6;

    int current = rand() % player_count + 1;
    cout << current << "��° �÷��̾���� �����մϴ�." << endl;

    int bullet_position = rand_bullet(maximum_bullet_count);

    while (true)
    {
        Sleep(1000);
        int position = rand_bullet(maximum_bullet_count);
        cout << current << "��° �÷��̾ źâ�� ���Ƚ��ϴ�." << endl;
        Sleep(1000);

        if (position == bullet_position)
        {
            cout << "��Ƽ踦 ������ �Ѿ��� �߻�Ǿ� �׾����ϴ�." << endl;
            return current;
        }
        else
        {
            cout << "��Ƽ踦 ������� �Ѿ��� ������ �ʾҽ��ϴ�." << endl;
        }
        current = current == player_count ? 1 : current + 1;
    }
}
