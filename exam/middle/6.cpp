#include <iostream>

using namespace std;

int main()
{
    string initial = "GPG";
    cout << "곽필경 : " << initial << endl;

    int idx = 0;
    for (int i = 1; i <= 9; i++)
    {
        idx = 0;
        for (int j = 0; j < i; j++)
        {
            cout << initial[idx];
            idx = idx < 2 ? idx + 1 : 0;
        }
        cout << endl;
    }
}
