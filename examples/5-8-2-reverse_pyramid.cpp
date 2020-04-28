/*
다음과 같이 출력하시오.

Enter pyramid's height: 10
**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *
*/

#include <iostream>

using namespace std;

int main()
{
    int height;
    cout << "Enter pyramid's height: ";
    cin >> height;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j < height - i; j++)
        {
            cout << '*';
        }

        cout << '\n';
    }
}
