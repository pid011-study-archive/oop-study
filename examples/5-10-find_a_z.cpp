/*
다음 식을 만족하는 모든 A와 Z를 출력하시오.(반복문의 중첩)
  A Z
+ Z A
---------
  9 9
*/

#include <iostream>

using namespace std;

int main()
{
    int target_number = 99;

    cout << "target number is " << target_number << '\n';

    for (int a = 0; a < 10; a++)
    {
        for (int z = 9; z > -1; z--)
        {
            int az;
            az = a * 10 + z;

            int za;
            za = a + z * 10;

            if (az + za == target_number)
            {
                cout << "a = " << a << ", z = " << z << '\n';
            }
        }
    }
}
