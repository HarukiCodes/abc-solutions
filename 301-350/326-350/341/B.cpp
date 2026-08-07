// B
// •ª‚©‚ç‚ñ
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<long long> A(N + 1, 0);
    for (int i = 1; i < N + 1; i++)
        cin >> A[i];

    for (int i = 1; i < N; i++)
    {
        long long S, T;
        cin >> S >> T;
        if (A[i] >= S)
        {
            A[i] -= S;
            A[i + 1] += T;
        }
    }

    cout << *max_element(A.begin(), A.end()) << endl;
    return 0;
}