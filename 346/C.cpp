// C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input
    int N;
    long long K;
    cin >> N >> K;
    long long K_sum = K * (K + 1) / 2;
    vector<long long> A;
    for (int i = 0; i < N; i++)
    {
        long long tmp;
        cin >> tmp;
        if (tmp <= K)
            A.push_back(tmp);
    }
    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    for (long long a : A)
        K_sum -= a;
    // output
    cout << K_sum << endl;
    return 0;
}