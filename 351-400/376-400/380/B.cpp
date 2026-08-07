#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S{};
    cin >> S;
    vector<int> A;
    for (int i = 0; i < (int)S.size(); i++)
    {
        if (S[i] == '|')
        {
            A.push_back(i);
        }
    }
    for (int i = 0; i < (int)A.size() - 1; i++)
    {
        cout << A[i + 1] - A[i] - 1 << ' ';
    }
    cout << "\n";
    return 0;
}