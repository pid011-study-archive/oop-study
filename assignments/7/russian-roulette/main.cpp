#include <iostream>
#include "russian_roulette.h"

using namespace std;

int main()
{
    int player_count;
    while (true)
    {
        cout << "�÷����� �ο��� �Է����ּ��� : ";
        cin >> player_count;
        if (player_count > 1)
        {
            break;
        }
        else
        {
            cout << "���þ� �귿�� �÷����Ϸ��� �ּ� 2�� �̻��� �ʿ��մϴ�." << endl;
        }
    }
    int result = RussianRoulette(player_count);
    cout << "���� : " << result << "��° �÷��̾�" << endl;
} 
