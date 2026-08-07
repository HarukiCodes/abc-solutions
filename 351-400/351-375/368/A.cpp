#include <bits/stdc++.h>
using namespace std;

// A.cpp
int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> A(N + 1, 0);
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }
    for (int i = N - K + 1; i <= N; i++)
    {
        cout << A[i] << " ";
    }
    for (int i = 1; i <= N - K; i++)
    {
        cout << A[i];
        if (i != N - K)
        {
            cout << " ";
        }
    }
    cout << '\n';
    return 0;
}