#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;
    int indexMiddle = (N + 1) / 2 - 1;
    // 条件1
    if (N % 2 == 0)
    {
        cout << "No\n";
        return 0;
    }
    // 条件2
    for (int i = 0; i < indexMiddle; i++)
    {
        if (S[i] != '1')
        {
            cout << "No\n";
            return 0;
        }
    }
    // 条件3
    if (S[indexMiddle] != '/')
    {
        cout << "No\n";
        return 0;
    }
    // 条件4
    for (int i = indexMiddle + 1; i < N; i++)
    {
        if (S[i] != '2')
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}