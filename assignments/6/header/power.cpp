#include <iostream>
#include <cmath>

using namespace std;

void Power()
{
    cout << "���� ����� �� ���� �Է����ּ���." << endl;
    cout << "���� ��� 2^3�� ����ϰ� ������ \"2 3\"ó�� �Է����ּ���." << endl;
    cout << "�Է� : ";
    long long n, k;
    cin >> n >> k;

    double result = pow(n, k);
    cout << result << endl;
}
