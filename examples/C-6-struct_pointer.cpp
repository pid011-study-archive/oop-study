/*
���� ����ü�� �����ͷ� �޾� �����͸� �Է¹ް�, heigh�� 10, weight��
2.5�� ������Ű�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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
