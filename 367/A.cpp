#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    if (B < C)
    {
        if (A > B && A < C)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
    else
    {
        if (A > B || A < C)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
    return 0;
}