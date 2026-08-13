#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, D;
    cin >> N >> D;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < N; i++)
    {
        cout << A[i]<<" ";
    }
    return 0;
}
