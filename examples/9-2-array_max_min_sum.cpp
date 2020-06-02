#include <iostream>

using namespace std;

int main()
{
    const int length = 5;
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    int max = INT_MIN, min = INT_MAX, sum = 0;
    for (int i = 0; i < length; i++)
    {
        int tmp = arr[i];

        if (max < tmp)
        {
            max = tmp;
        }
        if (min > tmp)
        {
            min = tmp;
        }
        sum += tmp;
    }

    cout << "Max : " << max << endl;
    cout << "Min : " << min << endl;
    cout << "Sum : " << sum << endl;
}
