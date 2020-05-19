#include <iostream>
#include <stdlib.h>
#include<time.h>

using namespace std;

bool GugudanGame();
int RandGugudanNumber();

int main()
{
    clock_t t1 = clock();
    bool result;
    result = GugudanGame();
    clock_t t2 = clock();
    double duration = (t2 - t1) / CLOCKS_PER_SEC;
    if (result)
    {
        cout << "You win!" << endl;
        cout << "Game play time: " << duration << endl;
    }
    else
    {
        cout << "You lose..." << endl;
    }
}

bool GugudanGame()
{
    int answer = 0, correct = 0;
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++)
    {
        int x = RandGugudanNumber();
        int y = RandGugudanNumber();
        printf("%d x %d = ", x, y);
        scanf_s("%d", &answer);

        correct = x * y;
        if (answer != correct)
        {
            return false;
        }
    }

    return true;
}

int RandGugudanNumber()
{
    int rand_number = 0;
    while (rand_number < 2 || rand_number > 9)
    {
        rand_number = rand() % 10;
    }

    return rand_number;
}
