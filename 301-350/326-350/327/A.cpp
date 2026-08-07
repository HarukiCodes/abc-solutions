// A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string s;
    bool flag = false;
    cin >> N >> s;
    for (int i = 1; i < N; i++)
    {
        if (s[i - 1] == 'a' && s[i] == 'b')
        {
            cout << "Yes" << endl;
            return 0;
        }
        else if (s[i - 1] == 'b' && s[i] == 'a')
        {
            cout << "Yes" << endl;
            return 0;
        }
        else
        {
        }
    }
    cout << "No" << endl;
}