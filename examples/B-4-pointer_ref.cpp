/*
const int num = 12;
포인터 변수를 선언해서 위 변수를 가리키도록 한다.
그리고 이 포인터 변수를 참조하는 참조자를 하나 선언한다.
이렇게 선언된 포인터 변수와 참조자를 이용해 num에 저장된 값을 출력한다.
*/

#include <iostream>

using namespace std;

int main()
{
    const int num = 12;
    const int* pt = &num;
    const int& ref_num = *pt;
    cout << *pt << endl;
    cout << ref_num << endl;
}
