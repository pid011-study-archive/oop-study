/*
자연수 n을 입력받아 2부터 그 수 사이에 있는 소수를 모두 찾아 출력하고 
소수의 개수도 함께 출력하시오.
(소수:1과 자기 자신만으로 나누어 떨어지는 1보다 큰 양의 정수)
*/

#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int count = 0;
    for (int i = 2; i <= number; i++)
    {
        bool is_prime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
        {
            cout << i << '\n';
            count++;
        }
    }

    cout << "prime number count: " << count << '\n';
}
