#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;

    cout << input;
    string output;
    if (input % 2 == 0 && input % 3 == 0)
    {
        output = "은 2의 배수이자 3의 배수입니다.";
    }
    else if (input % 2 == 0)
    {
        output = "은 2의 배수입니다.";
    }
    else if (input % 3 == 0)
    {
        output = "은 3의 배수입니다.";
    }
    else
    {
        output = "은 2의 배수도 3의 배수도 아닙니다.";
    }
    cout << output << endl;
}