#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    for (int i = S.size() - 2; i >= 0; i--)
    {
        if (S[i] == 'W' && S[i + 1] == 'A')
        {
            S[i] = 'A';
            S[i + 1] = 'C';
        }
    }
    cout << S << "\n";
    return 0;
}
