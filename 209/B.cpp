// ABC209 B.cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    vector<int> A(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }
    int total = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2)
        {
            total += A[i];
        }
        else
        {
            total += (A[i] - 1);
        }
    }
    if (X >= total)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
