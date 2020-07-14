/*
7¹ø ¹®Á¦
*/

#include <iostream>
#include <fstream>

using namespace std;

constexpr auto INPUT_FILE = "input2A.txt";
constexpr auto OUTPUT_FILE = "output_hgd.txt";

int main()
{
    char ch;
    ifstream fin(INPUT_FILE);
    ofstream fout(OUTPUT_FILE);

    while (fin.get(ch))
    {
        fout << (ch >= 'a' && ch <= 'z' ? ch -= 32 : ch);
    }
    fin.close();
    fout.close();
}
