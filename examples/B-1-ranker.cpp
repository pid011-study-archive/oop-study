/*
순위 새로고침
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

inline int RandScore()
{
    return rand() % 100;
}

void AddRank(int new_score, int* scores, int len)
{
    printf("%-2d :: 순위: ", new_score);

    bool added = false;
    int i = 0, j = 0;
    while (i < len)
    {
        if (!added && new_score > scores[j])
        {
            added = true;
            int p1 = scores[j];
            int p2 = 0;
            scores[j] = new_score;
            for (int k = j + 1; k < len; k++)
            {
                p2 = scores[k];
                scores[k] = p1;
                p1 = p2;
            }
        }
        else
        {
            j++;
        }

        printf("%-2d", scores[i]);
        printf("%c", (i < len - 1 ? ' ' : '\n'));
        i++;
    }
}

int main()
{
    const int SCORE_COUNT = 5;
    int scores[SCORE_COUNT];
    for (int i = 0; i < SCORE_COUNT; i++)
    {
        scores[i] = 0;
    }

    srand((unsigned)time(NULL));
    for (int i = 0; i < 8; i++)
    {
        int new_score = RandScore();
        AddRank(new_score, scores, SCORE_COUNT);
    }
}
