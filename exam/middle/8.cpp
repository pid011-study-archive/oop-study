#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int RandCard()
{
    srand((unsigned)time(NULL));
    return (rand() % 10) + 1;
}

int CardGen(int user_number)
{
    cout << "사용자" << user_number << "의 카드 : ";

    int a = 0, b = 0;
    a = RandCard();
    do
    {
        b = RandCard();
    } while (a == b);

    int sum = a + b;
    cout << a << ", " << b << " => " << sum << endl;
    return sum;
}

int main()
{
    int user_one = CardGen(1);
    int user_two = CardGen(2);

    string winner = user_one > user_two ? "사용자1" : "사용자2";
    cout << winner << "이 이겼습니다." << endl;
}
