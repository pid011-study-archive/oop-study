/*
6¹ø ¹®Á¦
*/

#include <iostream>
#include <fstream>

using namespace std;

typedef struct {
    char str[256];
} QUEST;

int main()
{
    QUEST quest;
    ifstream fs;
    fs.open("input1A.bin", ios::in | ios::binary);
    while (fs.read((char *)&quest, sizeof(quest)))
    {
        cout << quest.str << endl;

    }
    fs.close();

    return 0;
}
