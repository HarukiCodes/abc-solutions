#include <bits/stdc++.h>
using namespace std;

int main()
{
    string N;
    int countOf[10]{};
    cin >> N;
    for (int i = 0; i < 6; i++)
    {
        countOf[N[i] - '0']++;
    }
    for (int i = 1; i < 4; i++)
    {
        if (countOf[i] != i)
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}