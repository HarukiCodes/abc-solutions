// ABC200 C.cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    long long remainder[200]{};
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        remainder[A[i] % 200]++;
    }
    long long ans = 0;
    for (int r = 0; r < 200; r++)
    {
        ans += (remainder[r] * (remainder[r] - 1)) / 2;
    }
    cout << ans << endl;
    return 0;
}
