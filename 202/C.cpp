// ABC202 C.cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N), B(N), C(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        A[i]--;
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
        B[i]--;
    }
    for (int i = 0; i < N; i++)
    {
        cin >> C[i];
        C[i]--;
    }

    // B[C[j]]がそれぞれいくつあるかを記録する
    vector<int> counter(N);
    for (int i = 0; i < N; i++)
    {
        counter[B[C[i]]]++;
    }
    // A[i]=B[C[j]]でのcounterの合計を求める
    long long ans = 0;
    for (int i = 0; i < N; i++)
    {
        ans += counter[A[i]];
    }
    cout << ans << endl;
    return 0;
}
