// A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    vector<int> place;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '|')
            place.push_back(i);
    }
    for (int i = 0; i < S.size(); i++)
    {
        if (i < place[0] || place[1] < i)
            cout << S[i];
    }
    cout << endl;
    return 0;
}