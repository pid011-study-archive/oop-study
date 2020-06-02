#include <iostream>

using namespace std;

int main()
{
    char arr[100];
    cin >> arr;
    int length = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(char); i++)
    {
        if (arr[i] == '\0')
        {
            break;
        }
        length++;
    }

    cout << "length of '" << arr << "' is " << length << endl;
}
