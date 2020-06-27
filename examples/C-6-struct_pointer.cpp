/*
다음 구조체를 포인터로 받아 데이터를 입력받고, heigh는 10, weight는
2.5를 증가시키고 출력하는 프로그램을 작성하시오.
struct body
{
double height;
double weight;
};
*/

#include <iostream>

using namespace std;

struct Body
{
    double height;
    double weight;
};

int main()
{
    Body body;
    Body* body_ptr = &body;
    cin >> body_ptr->height;
    cin >> body_ptr->weight;
    body_ptr->height += 10;
    body_ptr->weight += 2.5;
    cout << body_ptr->height << endl;
    cout << body_ptr->weight << endl;
    return 0;
}
