#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S, ABC = "ABC";
    cin >> S;
    do
    {
        if (S == ABC)
        {
            cout << "Yes\n";
            return 0;
        }
    } while (next_permutation(ABC.begin(), ABC.end()));
    cout << "No\n";
    return 0;
}