#include <iostream>
using namespace std;

int main()
{
    long long X;
    cin >> X;
    long long factorial[21]{1, 1};
    for (int i = 2; i < 21; i++)
    {
        factorial[i] = factorial[i - 1] * i;
        if (X == factorial[i])
        {
            cout << i << "\n";
            return 0;
        }
    }
    return 0;
}
