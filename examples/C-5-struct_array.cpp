/*
데이터를 구조체 변수에 대입하여 출력하는 프로그램을 작성하시오.
*/

#include <iostream>

using namespace std;

struct Profile
{
    char name[50];
    char postCode[50];
    char adress[500];
};

int main()
{
    Profile profiles[3] =
    {
        {"이하나", "05716", "경기도 이천시 청강문화산업대학교"},
        {"박두나", "23048", "서울 송파구 문정동 롯데월드"},
        {"김세나", "08124", "경기도 이천시 꽃마을"}
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "성명: " << profiles[i].name << endl;
        cout << "우편번호: " << profiles[i].postCode << endl;
        cout << "집주소: " << profiles[i].adress << endl;
        cout << endl;
    }
}
